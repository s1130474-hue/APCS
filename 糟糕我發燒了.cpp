//============================================================================
// Name        : apcs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double f;
	cin >> f;
	cout << fixed << setprecision(3) << (f-32)*5/9 << "\n";
	return 0;
}
