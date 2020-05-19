#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float g, r;
	cin >> g;
	r = (g / 180) * 3.14;
	cout << fixed;
	cout.precision(4);
	cout << r << endl;

}