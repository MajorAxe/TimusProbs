// 1877 Велосипедные коды.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, k;
	cin >> n >> k;
	if ((n % 2 == 0) || (k % 2 == 1))
		cout << "yes";
	else
		cout << "no";
	return 0;
}

