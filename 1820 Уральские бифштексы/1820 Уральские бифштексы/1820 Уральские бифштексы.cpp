// 1820 Уральские бифштексы.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
//	freopen("input.txt", "rt", stdin);
	double n, k;
	cin >> n >> k;
	if (n <= k)
		cout << 2;
	else
		cout << ceil(n * 2 / k);
	return 0;
}

