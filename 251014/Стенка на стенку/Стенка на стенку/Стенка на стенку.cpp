// Стенка на стенку.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

long long shv(long long n)
{
	return n*(n-1) / 2;
}


int _tmain(int argc, _TCHAR* argv[])
{
	long long boitsov, komand, num1, num2, a, b, MaxShv, ShvVK, Shv1, Shv2, n;
	//freopen ("input.txt", "r", stdin);
	scanf("%lld", &n);
	for (int i=0; i<n; i++)
	{
	scanf("%lld %lld", &boitsov, &komand);
	if (komand>boitsov) komand = boitsov;
	num1 = boitsov / komand;
	num2 = num1 + 1;
	a = komand;
	b = 0;
	while ((a * num1 + b * num2) != boitsov)
	{
		a--;
		b++;
	}
	MaxShv = shv(boitsov);
	Shv1 = shv(num1)*a;
	Shv2 = shv(num2)*b;
	MaxShv -= Shv1 + Shv2;
	printf("%lld\n", MaxShv);
	}
	return 0;
}

