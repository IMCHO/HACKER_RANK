#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	map<string, int> PhoneBook;
	map<string, int>::iterator iter;
	string name;
	int pnum;
	int query_num;

	cin >> query_num;
	while (query_num != 0)
	{
		cin >> name >> pnum;
		PhoneBook.insert(pair<string, int>(name, pnum));
		query_num--;
	}

	string check_name;
	while (cin >> check_name)
	{
		if (PhoneBook.find(check_name) != PhoneBook.end()) cout << check_name << '=' << PhoneBook[check_name] << endl;
		else cout << "Not found" << endl;
	}

	return 0;
}