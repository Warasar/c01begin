#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float r,h,sk,sc;
	cin >> r >> h ;
	sk = 3.14 * (r * r) * h;
	sc = sk * 3;
	cout << "obiem cilindra = " << sc << endl;
	cout << "obiem konusa = " << sk << endl;
}