#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x1, y1, x2, y2, x3, y3, x4, y4, x0, y0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	x0 = (x1 + x3) / 2;
	y0 = (y1 + y3) / 2;
	x4 = x0 * 2 - x2;
	y4 = y0 * 2 - y2;
	cout << "D(" << x4 << ";" << y4 << ")" << endl;
}