#pragma once
/*				*\
Ourgame .01
==================
Licensed under GPLv2.

\*				*/

// File: common.h
//
// Purpose: Common includes.
//


#include <iostream>
#include <stdio.h>
#include <ostream>

#ifdef PLATFORM_WINDOWS
// Hack to disable console window on release buids
#include <windows.h>
#endif
#include "../base/basegame_main.h"