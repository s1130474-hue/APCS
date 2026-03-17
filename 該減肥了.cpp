#include <iostream>
using namespace std;

int main() {
	int weight;
	cin >> weight;
	int condition;
	condition = (weight > 50);
	cout << (weight - condition) << endl;

	return 0;
}
