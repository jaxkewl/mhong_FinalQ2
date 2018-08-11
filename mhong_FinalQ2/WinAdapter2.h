#pragma once
#include "CompWindowIfc.h"
#include "NewWinLib2.h"
class WinAdapter2 : public CompWindowIfc
{
private:
	NewWinLib2 * aWinPointer;
public:
	WinAdapter2(NewWinLib2 * l) {};
	~WinAdapter2() { delete aWinPointer; };

	//Use the Adapter Design Pattern
	void move() { aWinPointer->moveWin(); };
	void open() { aWinPointer->openWin(); };
	void close() { aWinPointer->closeWin(); };
};

