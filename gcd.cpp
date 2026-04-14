#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	while (x % y != 0){
		int temp = x % y;
		x = y;
		y = temp;
	}
	cout << y << endl;
	return 0;
}
