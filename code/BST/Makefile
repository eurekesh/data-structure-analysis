dataDriver: BST.o driver.o
	@echo "***************"
	@echo
	@echo Linking BST to driver
	g++ -std=c++11 -o dataDriver BST.o driver.o
	@rm -f BST.o driver.o
	@echo "***************"
	@echo "Built successfully"
BST.o: BST.cpp BST.hpp
	@echo "***************"
	@echo
	@echo Compiling BST.cpp
	g++ -std=c++11 -c BST.cpp
driver.o: driver.cpp BST.hpp
	@echo "***************"
	@echo
	@echo Compiling driver.cpp
	g++ -std=c++11 -c driver.cpp
clean:
	rm -rf BST.o driver.o dataDriver
