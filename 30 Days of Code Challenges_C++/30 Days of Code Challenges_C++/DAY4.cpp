#include <iostream>

using namespace std;

class Person {
public:
	int age;
	Person(int initialAge);
	void amIOld();
	void yearPasses();
};

Person::Person(int initialAge) {
	// Add some more code to run some checks on initialAge
	if (initialAge < 0)
	{
		age = 0;
		cout << "Age is not valid, setting age to 0." << endl;
	}
	else age = initialAge;
}

void Person::amIOld() {
	// Do some computations in here and print out the correct statement to the console 
	if (age < 13) cout << "You are young." << endl;
	else if (age >= 13 && age < 18) cout << "You are a teenager." << endl;
	else cout << "You are old." << endl;
}

void Person::yearPasses() {
	// Increment the age of the person in here
	age++;
}

int main()
{
	int num;
	int * age_arr;
	cin >> num;
	age_arr = new int[num];
	
	for (int i = 0; i < num; i++) cin >> age_arr[i];

	for (int i = 0; i < num; i++)
	{
		Person my_person(age_arr[i]);
		my_person.amIOld();
		my_person.yearPasses();
		my_person.yearPasses();
		my_person.yearPasses();
		my_person.amIOld();
		cout << endl;
	}
	
	return 0;
}