#pragma once
#include <iostream>

using namespace std;

class NewWinLib2
{
public:
	NewWinLib2();
	~NewWinLib2();
	void openWin() { cout << "openWin() called from NewWinLib2" << endl; };
	void closeWin() { cout << "closeWin() called from NewWinLib2" << endl; };
	void moveWin() { cout << "moveWin() called from NewWinLib2" << endl; };
};

