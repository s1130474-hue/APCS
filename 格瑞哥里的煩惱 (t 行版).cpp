#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i=0; i<t; i++){
		int year;
		cin >> year;
		if (((year%4 == 0)&&(year%100 != 0))||(year%400 == 0))
			cout << "a leap year\n";
		else
			cout << "a normal year\n";
	}
	return 0;
}
