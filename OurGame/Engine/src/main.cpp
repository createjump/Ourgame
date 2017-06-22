/*						*\
	Ourgame .01
========================
Licensed under GPLv2.
========================
 File: main.cpp

Purpose: Main entry point for engine.

\*						*/

#include "pubinc\common.h"
using namespace std;

int main(int argc, char* argv[]) {
#ifndef _DEBUG
	FreeConsole();
#endif
	game::init(argc, argv); // init
	return 0;
}