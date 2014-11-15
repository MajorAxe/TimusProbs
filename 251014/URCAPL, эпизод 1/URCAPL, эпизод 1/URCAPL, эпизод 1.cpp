// URCAPL, эпизод 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int Registers[26];
long long CurrReg = 0;
int InputNumbers[100005];
char Field[105][105];
char Direction = '>';
int i=1, j=1, NumInd=0, tick=0;
int H,W;
int InputNumbersCount;

bool move()
{
	if (Direction == '>') j++;
	if (Direction == '<') j--;
	if (Direction == 'v') i++;
	if (Direction == '^') i--;
	if ( (i <= H) && (i > 0) && (j <= W) && (j > 0) ) return true;
	else return false;
}

bool dostuff()
{
	char buff;
	int code, temp;
	buff = Field[i][j];
	code = int(buff) - 65;

	if (buff == '#') return false;

	if (buff == '.') return true;

	if (code>=0 && code<=25)
	{
		temp = CurrReg;
		CurrReg = Registers[code];
		Registers[code] = temp;
		return true;
	}

	if ( (buff == '^') || (buff == '>') || (buff == 'v') || (buff == '<') )
	{
		Direction = buff;
		return true;
	}

	if (buff == '?')
	{
		CurrReg = InputNumbers[NumInd];
		if (NumInd < InputNumbersCount - 1)
			NumInd++;
		if (abs(CurrReg) > 100000) 
		{
			cout << "OVERFLOW ERROR" << endl;
			return 0;
		}
		else
		return true;
	}

	if (buff == '!')
	{
		cout << CurrReg << endl;
		CurrReg = 0;
		return true;
	}

	if (buff == '+')
	{
		CurrReg++;
		if (abs(CurrReg) > 100000) 
		{
			cout << "OVERFLOW ERROR" << endl;
			return 0;
		}
		else
		return true;
	}

	if (buff == '-')
	{
		CurrReg--;
		if (abs(CurrReg) > 100000) 
		{
			cout << "OVERFLOW ERROR" << endl;
			return 0;
		}
		else
		return true;
	}

	if (buff == '@')
	{
		if (CurrReg == 0)
		{
			if (Direction == '^') 
			{
				Direction = '<';
				return true;
			}
			if (Direction == '>') 
			{
				Direction = '^';
				return true;
			}
			if (Direction == 'v') 
			{
				Direction = '>';
				return true;
			}
			if (Direction == '<') 
			{
				Direction = 'v';
				return true;
			}
		}
		else
		{
			if (Direction == '^') 
			{
				Direction = '>';
				return true;
			}
			if (Direction == '>') 
			{
				Direction = 'v';
				return true;
			}
			if (Direction == 'v') 
			{
				Direction = '<';
				return true;
			}
			if (Direction == '<') 
			{
				Direction = '^';
				return true;
			}
		}
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	freopen("input.txt", "r", stdin);
	
	for (int i=0; i<27; i++) Registers[i] = 0;

	cin >> H >> W;
	for (int n=1; n<H+1; n++)
		for (int m=1; m<W+1; m++)
			cin >> Field[n][m];

	cin >> InputNumbersCount;

	for (int n=0; n<InputNumbersCount; n++)
		cin >> InputNumbers[n];
	
	while (true) 
	{
		tick++;

		if (tick>1000000)
		{
			cout << "TIME LIMIT EXCEEDED" << endl;
			return 0;
		}

		if (!dostuff()) 
			return 0;

		if (!move()) 
		{
			cout << "RUNTIME ERROR" << endl;
			return 0;
		}
	}
	return 0;	
}

