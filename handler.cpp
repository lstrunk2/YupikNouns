// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// handler.cpp


#include "handler.h"



Handler::Handler()
{
	_next = nullptr;
}

void Handler::setNext(Handler *next)
{
	_next = next;
}