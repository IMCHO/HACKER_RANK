#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
	string str1, str2;
	char temp;
	cin >> str1 >> str2;

	cout << str1.size() << " " << str2.size() << endl;
	cout << str1 + str2 << endl;
	temp = str1[0];
	str1[0] = str2[0];
	str2[0] = temp;
	cout << str1 << " " << str2 << endl;
	return 0;
}
