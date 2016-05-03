// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// specialHandler.h

#ifndef SPECIALHANDLER_H
#define SPECIALHANDLER_H

#include "handler.h"

class SpecialHandler: public Handler
{
public:
	/*virtual*/ void handle(const string & word) override;
	
};


#endif