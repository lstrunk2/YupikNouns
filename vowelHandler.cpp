// CS 372 Software Construction
// Assignent 4
// Lonny Strunk
// May 2, 2014

// vowelHandler.cpp


#include "vowelHandler.h"

#include <vector>
using std::vector;

vector<string> _eEndingWords{"neqa","tuma"};


/*virtual*/ void VowelHandler::handle(const string & word)
{
	if(word.back() == 'a')
	{
		bool isSpecialWord = false;
		for(auto specialWord: _eEndingWords)
		{
			if(specialWord == word)
			{
				isSpecialWord = true;
				string baseForm = word;
				baseForm[word.length() -1] = 'e';
				baseForm += '-';
				cout << "Base: " << baseForm << endl;
			}
		}
		if(!isSpecialWord)
		{
			string baseForm = word;
			baseForm += '-';
			cout << "Base: " << baseForm << endl;
		}
	}
	else if(word.back() == 'i' || word.back() == 'u')
	{
		string baseForm = word;
		baseForm += '-';
		cout << "Base: " << baseForm << endl;
	}
	else
	{
		_next->handle(word);
	}

}