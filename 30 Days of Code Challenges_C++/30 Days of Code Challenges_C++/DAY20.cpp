#include "stdc++.h"

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<char> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	// Write Your Code Here
	int numswap = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + 1 < n && a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				numswap++;
			}
		}
	}
	cout << "Array is sorted in " << numswap << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[n-1] << endl;
	return 0;
}
