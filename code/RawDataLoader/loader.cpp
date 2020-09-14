#include <iostream>
#include <fstream>
using namespace std;
//goal is to make raw data more digestible for excel, so split it up by index,value
void load(string inputFile, string outputFile)
{
  ifstream input;
  input.open(inputFile);
  if(input.fail())
  {
    cout << "Failed to find input file" << endl;
    return;
  }

  string current = "";
  int points[40000];
  int counter = 0;
  while(getline(input, current, ','))
  {
    points[counter] = stoi(current);
    counter++;
  }
  ofstream output;
  output.open(outputFile, ios::trunc);
  if(output.fail())
  {
    cout << "Failed to find output file" << endl;
    return;
  }
  output << "Index,Value" << endl;
  for(int i = 0; i < 40000; i++)
  {
    output << i << "," << points[i] << endl;
  }
  output.close();
}

int main(int argc, char **argv)
{
  load(argv[1], argv[2]);
}
