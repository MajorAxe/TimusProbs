// Числа-перевёртыши.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	scanf("%d", &n);
	if (n==1) printf("11");
	if (n==2) printf("11 01");
	if (n==3) printf("16 06 68");
	if (n==4) printf("16 06 68 88");
	if (n>4) printf("Glupenky Pierre");
	return 0;
}

