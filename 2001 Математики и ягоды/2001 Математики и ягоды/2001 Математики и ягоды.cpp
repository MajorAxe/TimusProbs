// 2001 Математики и ягоды.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int a1, b1, a2, b2, a3, b3;
	scanf("%i %i", &a1, &b1);
	scanf("%i %i", &a2, &b2);
	scanf("%i %i", &a3, &b3);
	printf("%i %i", a1 - a3, b1 - b2);
	return 0;
}
