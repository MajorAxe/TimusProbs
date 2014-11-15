// Девайсы.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct drug{
	string name;
	string device;
	int price;
};

struct device{
	string name;
	int count;
	int minprice;
};		


int _tmain(int argc, _TCHAR* argv[])
{
	freopen ("input.txt", "r", stdin);
	drug drugs[6];
	device devices[6];
	bool founddev;
	int lastdev=0, target=0, maxcount=0, minpricegl=99999999;
	for (int i=0; i<6; i++)
	{
		devices[i].count = 0;
		devices[i].name = "";
		devices[i].minprice = 99999999;
	}
	for (int i=0; i<6; i++)
	{
		cin >> drugs[i].name;
		cin >> drugs[i].device;
		cin >> drugs[i].price;
		founddev = false;
		for (int k=5; k>=0; k--)
			if (devices[k].name == drugs[i].device)
			{
				devices[k].count++;
				founddev = true;
				if (drugs[i].price < devices[k].minprice)
					devices[k].minprice = drugs[i].price;
			}
		if (!founddev) 
		{
			devices[lastdev].name = drugs[i].device;
			devices[lastdev].minprice = drugs[i].price;
			devices[lastdev].count = 1;
			lastdev++;
		}

	}
	for (int k=5; k>=0; k--)
		if (devices[k].count > maxcount) maxcount = devices[k].count;
	for (int k=5; k>=0; k--)
		if ( (devices[k].count == maxcount) && (minpricegl > devices[k].minprice) )
		{
			minpricegl = devices[k].minprice;
			target = k;
		}
	cout << devices[target].name;
	return 0;
}

