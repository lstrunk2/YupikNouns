// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// consonantHandler.h

#ifndef CONSONANTHANDLER_H
#define CONSONANTHANDLER_H

#include "handler.h"

class ConsonantHandler: public Handler
{
public:
	/*virtual*/ void handle(const string & word) override;
	
};


#endif