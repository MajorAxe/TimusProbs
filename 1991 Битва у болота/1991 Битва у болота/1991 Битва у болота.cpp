
#include "stdafx.h"
#include <tchar.h>
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, k;
	int bumbum;
	int razn;
	int droids = 0;
	int spareBooms = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> bumbum;
		razn = k - bumbum;
		if (razn < 0) spareBooms -= razn;
		else droids += razn;
	}
	cout << spareBooms << ' ' << droids;
	return 0;
}

