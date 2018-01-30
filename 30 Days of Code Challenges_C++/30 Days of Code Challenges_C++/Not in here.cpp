#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void HowManySimilar(string & str, vector<int> &temp, int start, int end);
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	vector<int> same_count;
	vector<int> similar_count[100];
	string str;
	int length, num_of_query;
	int index1, index2;
	int num = 0;
	cin >> length >> num_of_query;
	//str = new string[length];
	cin >> str;

	while (num_of_query != 0)
	{
		cin >> index1 >> index2;
		
		if (index1 == index2)
		{
			same_count.push_back(str.size());
		}
		else
		{
			for (int i = 0; ; i++)
			{
				HowManySimilar(str, similar_count[i], index1, index2);
				index1++;
				if (index1 > index2) break;
			}
		}

		for(int)
		num_of_query--;
	}

	vector<int>::iterator iter;
	for (iter = same_count.begin(); iter != same_count.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}

void HowManySimilar(string & str, vector<int> &temp, int start, int end)
{
	int increase = 1;
	while (start + increase <= end)
	{
		if (str.at(start - 1) == str.at(start + increase - 1))
		{
			temp.push_back(1);
		}
		else
		{
			temp.push_back(0);
		}
		increase++;
	}
}