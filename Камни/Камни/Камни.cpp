// Камни.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>

using namespace std;

int A[20];
char Amas[20][20*100000];

int P(int i, int j)
{	if (i==0) 
	{
		if (A[0]==j) return 1;
		else		 return 0;
	}
	if (Amas[i][j] != -1) return Amas[i][j];
	else
	{
		Amas[i][j] = max(P(i-1,j), P(i-1, j-A[i]));
		return Amas[i][j];
	}
}

int _tmain(int argc, _TCHAR* argv[])
{	
	for (int i=0; i<20; i++)
		for (int j=0; j<20*100000; j++)
			Amas[i][j] = -1;
	freopen ("input.txt", "r", stdin);
	int n;
	float S=0;
	float delta = 1000000;
	scanf("%d", &n);
	for (int i=0; i<n; i++) 
	{
		scanf("%d", &A[i]);
		S += A[i];
	}

	if (n==1) 
		printf("%d\n", A[0]);
	else
	{

	S = S / 2;

	int k = 1, m = 2;
		while (k < n)
		{
			int temp;
			if (A[k-1] < A[k]) k = m++;
			else
			{
				temp = A[k-1];
				A[k-1] = A[k];
				A[k] = temp;
				if (--k == 0) k = m++;
			}
		}

	for (int i=0; i<=S; i++)
		if ( (P(n,i)==1) && (S-i<delta) ) delta = S-i;
	printf("%d\n", int(2*delta));
	}
	return 0;
}

