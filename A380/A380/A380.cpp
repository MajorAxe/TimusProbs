
#include "stdafx.h"
#include <tchar.h>
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	string seat, answer;
	int line;
	getline(cin, seat);
	line = atoi(seat.substr(0, seat.length() - 1).c_str());
	seat = seat.substr(seat.length() - 1, 1);
	if (line < 3) {
		if (seat == "A" || seat == "D") answer = "window";
		else answer = "aisle";
	} else if (line < 21) {
		if (seat == "A" || seat == "F") answer = "window";
		else answer = "aisle";	
	} else {
		if (seat == "A" || seat == "K") answer = "window";
		else if (seat == "C" || seat == "D" || seat == "G" || seat == "H") answer = "aisle";
		else answer = "neither";
	}
	cout << answer;
	return 0;
}

