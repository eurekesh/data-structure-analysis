In each folder, you will find either a cmake file or a Makefile. Simply running make in the directory will generate a usable binary, however I have already precompiled some binaries that are already placed in the folder.

To run cmake on a folder that has one, navigate to the cmake-build-debug folder and type "cmake .." in the console/terminal. Please note that this has only been tested on Mac. Alternatively, if you happen to have CLion, some build configurations should preload if you import it that will handle that for you. The built binaries will be in the respective cmake-build-debug folder. If you get some type of cmake error (cache mismatch), delete "CMakeCache.txt" and "cmake_install.cmake" and try "cmake .." again. As a final solution, running g++ -std=c++11 driver.cpp [associated implementation file here] will work.

The binaries take two arguments, an output file and a selection of either data set A or data set B. For example, if I called dataDriver from the BST folder, I would use ./dataDriver insert_search_performance_dataSetA.csv A to test dataSetA and output the results to the given file name. A and B can only be toggled, not changed as dataSetA.csv and dataSetB.csv are baked in at compile time.

RawDataLoader is not a pertinent experiment, it merely loaded the given data into an excel-friendly format. A binary is provided, however.

In the report folder, you will find a written report with the raw_data/ folder containing the figures used in the report and assets/ containing the excel spreadsheet and images for the report.

Thanks for a great semester of Data Structures!
~Ash
