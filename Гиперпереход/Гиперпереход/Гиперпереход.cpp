// Гиперпереход.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int _tmain(int argc, _TCHAR* argv[])
{
	freopen("input.txt", "rt", stdin);
	int n = 0;
	int intensities[60001];
	scanf("%d", &n);
	int curr, prev, sum = 0, maxsum = 0;
	if (n>0)
	{
		scanf("%d", &prev);
		if (prev>0) sum = prev;
		for (int i=1;i<n;i++)
		{
			scanf("%d", &curr);
			sum += curr;
			if (sum > maxsum) maxsum = sum;	
			if (sum<0) sum = 0;		
			prev = curr;
		}
	}
	printf("%d\n", maxsum);
	return 0;
}

