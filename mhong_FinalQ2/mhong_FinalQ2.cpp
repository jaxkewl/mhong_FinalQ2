// mhong_FinalQ2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WinAdapter.h"
#include "WinAdapter2.h"
#include "CompWindowIfc.h"

int main()
{
	NewWinLib * newWin = new NewWinLib;
	CompWindowIfc * ifc = new WinAdapter(newWin);
	ifc->open();
	ifc->move();
	ifc->close();

	NewWinLib2 * newWin2 = new NewWinLib2;
	CompWindowIfc * ifc2 = new WinAdapter2(newWin2);
	ifc2->open();
	ifc2->move();
	ifc2->close();

	return 0;
}

