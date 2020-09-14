#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include "BST.hpp"
using namespace std;

int* readData(string fileName){
  ifstream dataSet; //file operations
  dataSet.open(fileName);
  if(dataSet.fail())
  {
    cout << "FAILED TO LOCATE DATA" << endl;
    return 0;
  }

  int *data = new int[40000]; //allocate memory once successfully opened
  int counter = 0;
  string current = "";
  while(getline(dataSet, current, ',')) //fill the array
  {
    int current_data = stoi(current);
    data[counter] = current_data;
    counter++;
  }

  return data; //return pointer to first value
}

//TESTS
//accepts a linked list, searchArray to be filled with a time, number of indices, and index of where to store
void search_test(BST bst, float *resultsArr, const int *dataArr, int elem_loaded, int store_index)
{
  int rand_index;
  float search_time = 0;
  chrono::time_point<std::chrono::high_resolution_clock> start, end;
  chrono::duration<float> time_span;
  for(int i = 0; i < 100; i++)
  {
    rand_index = rand() % elem_loaded;

    start = std::chrono::high_resolution_clock::now();

    int result = bst.search(dataArr[rand_index]);

    end = std::chrono::high_resolution_clock::now();
    time_span = chrono::duration_cast<chrono::duration<float>>(end-start);
    search_time += time_span.count();

    //cout << rand_index << endl; ALL WORKS
    //cout << result << endl;
  }
  search_time /= 100; //average search time
  resultsArr[store_index] = search_time;
}

//general fact: modulus operations are cpu intensive, only perform AFTER timer ends
void test(const int* data, string outputFile)//tests inserts and can pass off to search
{

  srand(time(0)); //seed random
  float *search = new float[400]; //stores insert values
  float insert[400]; //stores search values
  BST bst; //initialize linked list
  int counter = 0; //count the index

  chrono::time_point<std::chrono::high_resolution_clock> start, end; //chrono setup
  chrono::duration<float> time_span;

  float store_insert = 0; //stores value to be inserted into results

  for(int i = 0; i < 400; i++) //note to self: leave inequalities alone, tested
  {
    for(int j = 0; j < 100; j++)
    {
      start = std::chrono::high_resolution_clock::now(); //timing

      bst.insert(data[counter]); //insert
cout << "ran" << endl;
      end = std::chrono::high_resolution_clock::now();
      time_span = chrono::duration_cast<chrono::duration<float>>(end-start);
      store_insert += time_span.count(); //add the current amount of time it takes

      counter++; //increment index
    }

    store_insert /= 100; //average time per element
    insert[i] = store_insert; //store insert time
    store_insert = 0;//reset for next iteration
    search_test(bst, search, data, counter, i);
    cout << "ran search" << endl;
  }
  //linkedList.display();
  //*************************** ALL TESTS COMPLETE BY THIS POINT ***************************
  //write to file
  ofstream output;
  output.open(outputFile, ios::trunc);
  if(output.fail())
  {
    cout << "Failed to locate output file" << endl;
    return;
  }
  output << "Iteration,Avg Insert Time,Avg Search Time" << endl;
  for(int m = 0; m < 400; m++)
  {
    output << fixed << showpoint;
    output << setprecision(12);
    output << m+1 << "," << (insert[m] * 1000000) << "," << (search[m] * 1000000) << endl; //convert to microseconds and store
  }
  output.close();
}
//DUPLICATES ARE HANDLED if added node is less or equal to current node, go left when adding
int main(int argc, char const *argv[]){
  if(strcmp(argv[2], "a") == 0|| strcmp(argv[2], "A") == 0)
  {
    const int *dataA = readData("dataSetA.csv");
    test(dataA, argv[1]);
    cout << "Tested dataSetA" << endl;
  }
  else if(strcmp(argv[2], "b") == 0|| strcmp(argv[2], "B") == 0)
  {
    const int *dataB = readData("dataSetB.csv");
    test(dataB, argv[1]);
    cout << "Tested dataSetB" << endl;
  }
}
