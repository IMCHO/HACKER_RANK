#include "stdc++.h""

using namespace std;

int factorial(int n) {
	// Complete this function
	if (n == 1) return n;
	else return n * factorial(n - 1);
}

int main() {
	int n;
	cin >> n;
	int result = factorial(n);
	cout << result << endl;
	return 0;
}
