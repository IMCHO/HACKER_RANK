#include "stdc++.h"

using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;

	double totalcost = meal_cost + meal_cost*tip_percent / 100 + meal_cost*tax_percent / 100;
	int temp = totalcost;
	if (totalcost - temp >= 0.5) temp += 1;
	
	cout << "The total meal cost is " << temp << " dollars." << endl;
    return 0;
}