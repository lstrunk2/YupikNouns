// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// nounHandler.h

#ifndef NOUNHANDLER_H
#define NOUNHANDLER_H

#include "handler.h"
#include "specialHandler.h"
#include "consonantHandler.h"
#include "vowelHandler.h"


class NounHandler: public Handler
{
private:
	Handler * _special;
	Handler * _consonant;
	Handler * _vowel;
public:
	NounHandler();
	~NounHandler();
	/*virtual*/ void handle(const string & word);
	
};


#endif