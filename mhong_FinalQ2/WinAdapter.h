#pragma once

#include "CompWindowIfc.h"
#include "NewWinLib.h"
class WinAdapter : public CompWindowIfc
{
private:
	NewWinLib * aWinPointer;

public:
	WinAdapter(NewWinLib * l) {};
	~WinAdapter() { delete aWinPointer; };

	//Use the Adapter Design Pattern
	void move() { aWinPointer->winMove(); };
	void open() { aWinPointer->winOpen(); };
	void close() { aWinPointer->winClose(); };
};

