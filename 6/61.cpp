#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	char c;
	float d;
	cin >> a >> c >> b;
	switch (c) {
		case '+': d = a + b; break;
		case '-': d = a - b; break;
		case '*': d = a * b; break;
		case '/': d = float(a) / float(b); break;
		case '%': d = a % b; break;
	}
	cout << d << endl;
}