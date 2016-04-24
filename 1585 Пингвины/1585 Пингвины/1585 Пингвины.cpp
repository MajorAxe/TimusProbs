// 1585 Пингвины.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	int emp = 0;
	int lit = 0;
	int mac = 0;
	cin >> n;
	string penguin;
	getline(cin, penguin);
	for (int i = 0; i < n; i++) {
		getline(cin, penguin);
		if (penguin.compare("Emperor Penguin") == 0) emp++;
		if (penguin.compare("Little Penguin") == 0) lit++;
		if (penguin.compare("Macaroni Penguin") == 0) mac++;
	}
	if ((emp > lit) && (emp > mac)) cout << "Emperor Penguin";
	if ((lit > emp) && (lit > mac)) cout << "Little Penguin";
	if ((mac > lit) && (mac > emp)) cout << "Macaroni Penguin";
	return 0;
}

