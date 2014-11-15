// Исинбаев.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Coder
	{
		string Name;
		short Number;
		bool touched;
	}; 

Coder Coders[301];
int CodersCnt = 0;
bool matr[301][301];
int queue[301];
int qStart = 0;
int qEnd = 0;



int addCoder(string inName)
		{
		for (int i=0; i<CodersCnt; i++)
			if (Coders[i].Name == inName) return i;
		Coders[CodersCnt].Name = inName;
		Coders[CodersCnt].Number = 500;
		Coders[CodersCnt].touched = false;
		return CodersCnt++;
		}


int _tmain(int argc, _TCHAR* argv[])
{
	freopen ("E:\\input.txt", "r", stdin);
	freopen ("E:\\output.txt", "w", stdout);
	int TeamCount;
	cin >> TeamCount;

	for (int i=0;i<301;i++)
		for (int j=0;j<301;j++)
			matr[i][j] = false;
	
	string s1;
	int n1,n2,n3;

	for (int i=0; i<TeamCount; i++)
	{
		cin >> s1;
		n1 = addCoder(s1);
		cin >> s1;
		n2 = addCoder(s1);
		cin >> s1;
		n3 = addCoder(s1);
		matr[n1][n2] = true;
		matr[n2][n1] = true;
		matr[n1][n3] = true;
		matr[n3][n1] = true;
		matr[n2][n3] = true;
		matr[n3][n2] = true;
	}

	for (int i=0;i<301;i++) matr[i][i] = false;

	int start = 500;

	for (int i=0; i<CodersCnt; i++)
		if (Coders[i].Name == "Isenbaev") start = i;

	if (start != 500)
		{	
			int CurrLevel = 0;
			queue[qEnd] = start;
			qEnd++;
			Coders[start].touched = true;
			Coders[start].Number = 0;
			while(qStart != qEnd)
			{
				start = queue[qStart];	
				qStart++;
				CurrLevel = Coders[start].Number;
				for (int i=0;i<CodersCnt;i++)
						if (matr[start][i] && !Coders[i].touched) 
						{
							queue[qEnd] = i;
							qEnd++;
							Coders[i].Number = CurrLevel + 1;
							Coders[i].touched = true;
						}
			}
		}

	int i = 1, j = 2;
		while (i < CodersCnt)
		{
			Coder temp;
			if (Coders[i-1].Name < Coders[i].Name) i = j++;
			else
			{
				temp = Coders[i-1];
				Coders[i-1] = Coders[i];
				Coders[i] = temp;
				if (--i == 0) i = j++;
			}
		}

	for (i=0; i<CodersCnt; i++)
		if (Coders[i].Number == 500)
			cout << Coders[i].Name << " undefined" << endl;
		else
			cout << Coders[i].Name << " " << Coders[i].Number << endl;
	//return 0;
}

