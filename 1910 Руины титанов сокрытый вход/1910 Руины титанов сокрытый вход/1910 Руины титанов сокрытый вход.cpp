// 1910 Руины титанов сокрытый вход.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

int main(array<System::String ^> ^args)
{
//	freopen ("input.txt", "r", stdin);
//	freopen ("output.txt", "w", stdout);
	int n;
	int maxsum = 0;
	int sum = 0;
	int door = 1;
	int section1, section2, section3;
	int sectionLast = 0;
	cin >> n;
	cin >> section1;
	sum += section1;
	cin >> section2;
	sum += section2;

	for (int i = 2; i < n; i++) {
		cin >> section3;
		sum += section3;
		sum -= sectionLast;
		if (sum > maxsum) {
			door = i;
			maxsum = sum;
		}
		sectionLast = section1;
		section1 = section2;
		section2 = section3;
	}
    cout << maxsum << ' ' << door;
    return 0;
}
