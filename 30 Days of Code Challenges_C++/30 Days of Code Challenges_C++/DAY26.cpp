#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	string str[2];
	int day[2] = { 0, };
	int month[2] = { 0, };
	int year[2] = { 0, };

	for (int i = 0; i < 2; i++)
	{
		getline(cin, str[i]);
		stringstream ss(str[i]);
		ss >> day[i] >> month[i] >> year[i];
	}

	if (year[0] > year[1]) cout << 10000 << endl;
	else if (year[0] == year[1])
	{
		if (month[0] > month[1]) cout << 500 * (month[0] - month[1]) << endl;
		else if (month[0] == month[1])
		{
			if (day[0] > day[1]) cout << 15 * (day[0] - day[1]) << endl;
			else cout << 0 << endl;
		}
		else cout << 0 << endl;
	}
	else cout << 0 << endl;

	return 0;
}
