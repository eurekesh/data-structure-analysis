dataDriver: LL.o driver.o
	@echo "***************"
	@echo
	@echo Linking LL to driver
	g++ -std=c++11 -o dataDriver LL.o driver.o
	@rm -f LL.o driver.o
	@echo "***************"
	@echo "Built successfully"
LL.o: LL.cpp LL.hpp
	@echo "***************"
	@echo
	@echo Compiling LL.cpp
	g++ -std=c++11 -c LL.cpp
driver.o: driver.cpp LL.hpp
	@echo "***************"
	@echo
	@echo Compiling driver.cpp
	g++ -std=c++11 -c driver.cpp
clean:
	rm -rf LL.o driver.o dataDriver
