#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c, x, y;
	cin >> a >> b >> c;
	x = -(b / (2 * a));
	y = -( ( (b*b) - (4*a*c) ) / (4*a) );
	cout << fixed;
	cout.precision(4);
	cout << "x = " << x << endl;
	cout << fixed;
	cout.precision(4);
	cout << "y = " << y << endl;
}