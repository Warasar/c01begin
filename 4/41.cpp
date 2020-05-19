#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c = 1;
	cin >> a;
	b = a % 10;
	a /= 10;
	c *= b;
	b = a % 10;
	a /= 10;
	c *= b;
	b = a % 10;
	c *= b;
	cout << c << endl;
}