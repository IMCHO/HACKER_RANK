#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	vector<int> arr;
	int count;
	int num;
	cin >> count;

	while (count != 0)
	{
		cin >> num;
		arr.push_back(num);
		count--;
	}

	vector<int>::reverse_iterator iter;
	for (iter = arr.rbegin(); iter != arr.rend(); iter++)
	{
		cout << *iter << " ";
	}
	return 0;
}
