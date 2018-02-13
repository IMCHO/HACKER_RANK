#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
using namespace std;

class Node
{
public:
	Node * next;
	map<string, string> attribute[100];
	string tag_name;

	Node(string _name)
		:tag_name(_name)
	{
		next = NULL;
	}

};

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int line_num;
	int query_num;
	cin >> line_num >> query_num;

	
	return 0;
}
