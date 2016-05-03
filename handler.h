// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// handler.h

#ifndef HANDLER_H
#define HANDLER_H

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

// Abstract Handler Class

class Handler
{
protected:
	Handler * _next;
public:
	Handler():_next(nullptr){};
	virtual ~Handler(){_next = nullptr;};
	virtual void handle(const string & word) = 0;
	void setNext(Handler *next){_next = next;};
};

#endif