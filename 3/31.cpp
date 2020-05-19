#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	double s, s1, s2, s3, r;
	cin >> r;
	s = (r + r) * (r + r); //площадь квадрата
	s1 = M_PI * r * r; //площадь круга
	s2 = (s - s1) / 4; //верхний угол
	s3 = r * r; //нижний угол
	cout << s2 + s3 << endl;
}