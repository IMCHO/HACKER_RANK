#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";
// Declare second integer, double, and String variables.
	int num1;
	double num2;
	string str;
// Read and save an integer, double, and String to your variables.
// Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
	cin >> num1 >> num2;
	//getline(cin >> ws, str);
	

// Print the sum of both integer variables on a new line.
	cout << num1 + i << endl;
// Print the sum of the double variables on a new line.
	d += num2;
	cout << fixed<<setprecision(1)<<d << endl;
// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.
	//cout << str;

return 0;
}