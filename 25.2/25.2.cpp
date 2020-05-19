#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	float d,s,r;
	cin >> d;
	r = d / (2 * 3.14);
	s = 3.14 * r * r;
	cout << fixed;
	cout.precision(4);
	cout << s << endl;
}