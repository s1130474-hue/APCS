#include <iostream>
using namespace std;

void table99(int x, int y){
	for (int i = 1; i<= 9; i++){
		for (int j = x; j <= y; j++){
			cout << j << "*" << i << "=" << j*1 << " ";
		}
		cout << "\n";
	}
	cout << "-------------------\n";
}

int main(){
	table99(1, 3);
	table99(4, 6);
	table99(7, 9);
	return 0;
}
