// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// vowelHandler.h

#ifndef VOWELHANDLER_H
#define VOWELHANDLER_H

#include "handler.h"

class VowelHandler: public Handler
{
public:
	/*virtual*/ void handle(const string & word) override;
	
};


#endif