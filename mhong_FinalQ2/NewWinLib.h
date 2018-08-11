#pragma once
#include "CompWindowIfc.h"
#include <iostream>

using namespace std;
class NewWinLib
{
public:

	void winOpen() { cout << "winOpen() called from NewWinLib()" << endl; };
	void winClose() { cout << "winClose() called from NewWinLib()" << endl; };
	void winMove() { cout << "winMove() called from NewWinLib()" << endl; };

	NewWinLib();
	~NewWinLib();
};

