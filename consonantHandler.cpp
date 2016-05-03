// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// consonantHandler.cpp


#include "consonantHandler.h"

/*virtual*/ void ConsonantHandler::handle(const string & word)
{
	if(word.back() == 'k')
	{
		string baseForm = word;
		baseForm[word.length() - 1] = 'g';
		baseForm += '-';
		cout << "Base: " << baseForm << endl;
	}
	else if (word.back() == 'q')
	{
		string baseForm = word;
		baseForm[word.length() - 1] = 'r';
		baseForm += '-';
		cout << "Base: " << baseForm << endl;
	}
	else
	{
		_next->handle(word);
	}
}