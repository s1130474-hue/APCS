#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i　<= 9; i++){
		for (int j = 1; j <= 3; j++){
			cout << j << "*" << i << "=" << j*1 << " ";
		}
		cout << "\n";
	}
	cout << "-------------------\n";
	for (int i = 1; i　<= 9; i++){
		for (int j = 4; j <= 6; j++){
			cout << j << "*" << i << "=" << j*1 << " ";
		}
		cout << "\n";
	}
	cout << "-------------------\n";
	for (int i = 1; i　<= 9; i++){
		for (int j = 7; j <= 9; j++){
			cout << j << "*" << i << "=" << j*1 << " ";
		}
		cout << "\n";
	}
	cout << "-------------------\n";
		return 0;
	}
