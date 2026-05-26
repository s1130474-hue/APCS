#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++){
		int distant = abs(s[i] - s[i+1]);
		cout << distant;
	}
	cout << endl;
	return 0;
}
