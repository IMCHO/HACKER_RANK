#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator
{
public:
	int power(int n1, int n2)
	{
		if (n1 >= 0 && n2 > 0)
		{
			int temp = n1;
			while (--n2 > 0) temp *= n1;
			return temp;
		}
		else if (n2 == 0) return 1;
		else throw out_of_range("n and p should be non-negative");
	}
};

int main()
{
	Calculator myCalculator = Calculator();
	int T, n, p;
	cin >> T;
	while (T-->0) {
		if (scanf("%d %d", &n, &p) == 2) {
			try {
				int ans = myCalculator.power(n, p);
				cout << ans << endl;
			}
			catch (exception& e) {
				cout << e.what() << endl;
			}
		}
	}

}