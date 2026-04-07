#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int x, arr[3]; // arr[0] arr[1] arr[2]
	for (int i=0;i<n;i++){
		cin >> x;
		arr[x % 3]++;
	}
	cout << arr[0] << " " arr[1] << " " arr[2] << " " << endl;
	return 0;
}
