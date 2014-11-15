// Очередной пробный тур.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>


int _tmain(int argc, _TCHAR* argv[])
{
	long long A, B, C, X, Y;
	scanf("%lld %lld %lld",&X,&Y,&C);
	if (X+Y<C) printf("Impossible");
	else
	{
		A = std::min(X,C);
		if (A>C) 
		{
			A = C;
			B = 0;
		}
		else B = C - A;
		printf("%lld %lld",A,B);
	}
	return 0;
}

