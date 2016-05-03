// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// main.cpp

// clang++ -std=c++11 main.cpp nounHandler.cpp specialHandler.cpp consonantHandler.cpp vowelHandler.cpp -o main && ./main

#include "nounHandler.h"

int main()
{
	NounHandler nounHandler;
	nounHandler.handle("qimugta");
	nounHandler.handle("cavun");
	nounHandler.handle("akutaq");
	nounHandler.handle("atkuk");
	nounHandler.handle("nuna");
	nounHandler.handle("neqa");
	nounHandler.handle("ui");
	nounHandler.handle("patu");

	return 0;
}