// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// specialHandler.cpp


#include "specialHandler.h"

/*virtual*/ void SpecialHandler::handle(const string & word)
{
	if(word[word.length() -2] == 't' && word.back() == 'a')
	{
		string baseForm = word;
		baseForm.back() = 'e';
		baseForm += '-';
		cout << "Base: " << baseForm << endl;
	}
	else if(word.back() == 'n')
	{
		string baseForm = word;
		baseForm[word.length() -1] = 't';
		baseForm += 'e';
		baseForm += '-';
		cout << "Base: " << baseForm << endl;
	}
	else
	{
		_next->handle(word);
	}
}