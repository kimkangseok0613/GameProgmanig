#include "console.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

void SetConsoleSize(int _col, int _lines)
{
	char setText[100];
	sprintf_s(setText, 100, "mode con cols=%d lines=%d", _col, _lines);
	system(setText);
}
