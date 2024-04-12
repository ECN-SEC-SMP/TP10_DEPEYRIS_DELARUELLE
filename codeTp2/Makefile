# A mettre a jour : répertoire d'installation de Google Test
GTEST_DIR = ./../googletest/googletest
GTEST_LIB = ./../googletest/lib

CPP_FLAGS = -isystem $(GTEST_DIR)/include  -g -Wall -Wextra -pthread -std=c++11

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

mytest.o: mytest.cpp Calculator.h
	g++ -c $(CPP_FLAGS) mytest.cpp

Calculator.o: Calculator.cpp Calculator.h
	g++ -c $(CPP_FLAGS) Calculator.cpp

mytest.out: mytest.o Calculator.o
	g++ $(CPP_FLAGS) -o mytest.out mytest.o Calculator.o -lpthread $(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a
