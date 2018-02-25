#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool prime(int num)
{
	if (num == 1) return false;
	//else if (num == 2) return true;
	else
	{
		for (int j = 2; j < sqrt(num); j++)
		{
			if (num % j == 0) return false;
		}
		return true;
	}
}
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int count;
	int temp;
	vector<int> num;
	cin >> count;

	while (count-- > 0)
	{
		cin >> temp;
		num.push_back(temp);
	}

	for (int i = 0; i < num.size(); i++)
	{
		if (prime(num[i])) cout << "Prime" << endl;
		else cout << "Not prime" << endl;
	}
	return 0;
}
