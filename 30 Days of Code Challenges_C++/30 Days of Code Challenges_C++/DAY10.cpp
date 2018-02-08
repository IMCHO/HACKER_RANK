#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	int n;
	cin >> n;

	vector<int> result;
	vector<int> max_binary;
	vector<int>::iterator iter;
	vector<int>::reverse_iterator r_iter;
	int count = 0;
	int max = 0;

	while (n != 1)
	{
		if (n % 2 == 0) result.push_back(0);
		else result.push_back(1);
		n = n / 2;
	}
	result.push_back(1);
	
	for (r_iter = result.rbegin(); r_iter < result.rend(); r_iter++)
	{
		if (*r_iter == 1) count++;
		else
		{
			max_binary.push_back(count);
			count = 0;
		}
	}
	max_binary.push_back(count);

	for (iter = max_binary.begin(); iter < max_binary.end(); iter++)
	{
		if (max < *iter) max = *iter;
		else continue;
	}
	printf("%d\n", max);
	return 0;
}
