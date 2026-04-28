#include <iostream>
using namespace std;

int main() {
	int r, c;
	int a[100][100];
	while (cin >> r >> c){
		for (int i=0; i<r ; i++){
			for (int j=0; j<r ; j++){
				cin >> a[i][j];
			}
		}
		for (int i=0; i<c; i++){
			for(int j=0; j<r; j++){
				cout << a[j][i] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
