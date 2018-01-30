#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	vector<int> *arr;
	vector<int> temp;
	int length, num_of_query;
	int count, num;
	int index1, index2;
	cin >> length >> num_of_query;

	arr = new vector<int>[length];

	for (int i = 0; i < length; i++)
	{
		cin >> count;
		while (count != 0)
		{
			cin >> num;
			arr[i].push_back(num);
			count--;
		}
	}

	while (num_of_query != 0)
	{
		cin >> index1 >> index2;
		temp.push_back(arr[index1].at(index2));
		num_of_query--;
	}

	for (int i = 0; i < temp.size(); i++) cout << temp.at(i) << endl;

	delete[]arr;
	return 0;
}
