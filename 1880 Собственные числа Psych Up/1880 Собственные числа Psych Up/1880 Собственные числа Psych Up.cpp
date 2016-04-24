// 1880 Собственные числа Psych Up.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int arr1[4000];
	bool arr2[4000];
	int n1, n2, n3;
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		cin >> arr1[i];
		arr2[i] = true;
	}
	cin >> n2;
	int curr = 0;
	for (int i = 0; i < n2; i++)
	{
		int number;
		cin >> number;
		while ((arr1[curr] < number) && (curr <= n1))
		{
			arr2[curr] = false;
			curr++;
		}
		if (arr1[curr] == number)
			curr++;
	}
	cin >> n3;
	curr = 0;
	for (int i = 0; i < n3; i++)
	{
		int number;
		cin >> number;
		while ((arr1[curr] < number) && (curr <= n1))
		{
			arr2[curr] = false;
			curr++;
		}
		if (arr1[curr] == number)
			curr++;
	}
	int sobstv = 0;
	for (int i = 0; i < n1; i++)
		if (arr2[i])
			sobstv++;
	cout << sobstv;
	return 0;
}

