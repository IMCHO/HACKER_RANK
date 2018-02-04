#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int count;
	string str;
	vector<char> odd;
	vector<char> even;
	cin >> count;

	while (count != 0)
	{
		cin >> str;
		for (int i = 0; i < str.size(); i++)
		{
			if (i % 2 == 0) even.push_back(str.at(i));
			else odd.push_back(str.at(i));
		}
		vector<char>::iterator iter;
		for (iter = even.begin(); iter < even.end(); iter++) cout << *iter;
		cout << ' ';
		for (iter = odd.begin(); iter < odd.end(); iter++) cout << *iter;
		cout << endl;
		count--;
		even.clear();
		odd.clear();
	}
	return 0;
}
