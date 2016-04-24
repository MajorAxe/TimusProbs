// 1225 дыруш.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <tchar.h>

using namespace std;

int getVariants(int rightColor, int stripes) {
	int variants;
	if (stripes == 1) return 2;
	if (stripes == 2) {
		variants = isRightBlue ? 2 : 4;
		return variants;
	}
	if (rightColor == 0) {
		variants = 2 * getVariants(false, stripes - 1);
	} else if (rightColor == 1){
		variants = 2 * getVariants(false, stripes - 1) + getVariants(true, stripes - 1);
	}
	return variants;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n, m;
	cin >> n;
	m = getVariants(true, n);
	cout << m;
	return 0;
}

