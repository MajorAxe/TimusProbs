// Произведение цифр.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int N;
	long long OutN=0, mult=1;
	bool flag = true;
	scanf("%d", &N);
	if (N == 0)
	{
		printf("%d", 10 );
		return 0;
	}
	if (N == 1)
	{
		printf("%d", 1 );
		return 0;
	}
	while (flag) 
	{
		flag = false;
		for (int i=9; i>1; i--)
			if ( (N % i) == 0 )
			{
				OutN += i * mult;
				N = N / i;
				mult *= 10;
				flag = true;
				break;
			}
	}
	if (N==1) printf("%lld",OutN);
	else	 printf("%d", -1 );
	return 0;
}

