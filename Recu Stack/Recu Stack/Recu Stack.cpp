// Recu Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void myStack(int prev)
{
    int n;
    if (!(cin >> n)) return;
    if (n != 0) myStack(n);
    cout << prev << ' ';
}


int _tmain(int argc, _TCHAR* argv[])
{	

	
	freopen ("input.txt", "r", stdin);
	int first;
	cin >> first;
	myStack(first);
	return 0;
}

