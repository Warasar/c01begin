#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float res;
	int x;
	cin >> x;
	res = 2 + x * (3 + x * (1 + x * (-4 + x * (2))));
	cout << res << endl;
}