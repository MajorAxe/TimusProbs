// Время приключений.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	freopen ("input.txt", "r", stdin);
	string buff;
	int code, Colors;
	int Stones[26];
	int Nums[26];
	int MaxSize = 0;

	for (int i=0; i<26; i++) Nums[i] = 0;
	for (int i=0; i<26; i++) Stones[i] = 0;
	cin >> buff;
	for (int i=0; i<buff.length(); i++)
	{
		code = int(buff[i]) - 97;
		Stones[code]++;
	}

	cin >> Colors;

	int k = 1, m = 2;
		while (k < 26)
		{
			int temp;
			if (Stones[k-1] < Stones[k]) k = m++;
			else
			{
				temp = Stones[k-1];
				Stones[k-1] = Stones[k];
				Stones[k] = temp;
				if (--k == 0) k = m++;
			}
		}

	int Last = 25;

	for (int i=0; i<Colors; i++)
	{
		int CurrNum = Stones[Last];
		MaxSize += CurrNum; 
		while ( (CurrNum == Stones[Last]) && (CurrNum != 0) && (Last >= 0) )
		{
			Nums[i]++;
			CurrNum = Stones[Last];
			Last--;
		}
	}

	int Combos = 1;
	int u = 0;

	while (Nums[u] > 0)
	{
		Combos *= Nums[u];
		u++;
	}

	cout << MaxSize << ' ' << Combos << endl;

	return 0;
}

