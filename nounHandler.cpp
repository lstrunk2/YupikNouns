// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// nounHandler.cpp


#include "nounHandler.h"

NounHandler::NounHandler()
{
	_special = new SpecialHandler();
	_consonant = new ConsonantHandler();
	_vowel = new VowelHandler();
	_next = _special;
	_special->setNext(_consonant);
	_consonant->setNext(_vowel);
}

NounHandler::~NounHandler()
{
	delete _special;
	delete _consonant;
	delete _vowel;
}


/*virtual*/ void NounHandler::handle(const string & word)
{
	_next->handle(word);
}