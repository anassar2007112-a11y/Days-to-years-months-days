#include<iostream>;
using namespace std;
int main() {
	int num;
	int year, month, remainding_days;	
	cout << "Inter the number ef days: ";
	cin >> num;
	int years = num / 365;
	remainding_days = num % 365;
	month = remainding_days / 30;
	remainding_days = remainding_days % 30;
	cout << "Years: " << years << endl;
	cout << "Months: " << month << endl;
	cout << "Remaining Days: " << remainding_days << endl;
	return 0;	
}