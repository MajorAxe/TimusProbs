// Обратный корень.cpp : Defines the entry point for the console application.
//
//#pragma comment(linker, "/STACK:16777216")
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <stack>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{	
	freopen("input.txt", "rt", stdin);
	stack <long double> chisla;
	long double temp = 0, tempt = 0;
	while (cin >> tempt)	chisla.push(tempt);
	cout << setprecision(4) << fixed;
	while (!chisla.empty())
		{
		temp = sqrt(chisla.top());
		chisla.pop();
		cout << temp << endl;
		}
	return 0;
}

