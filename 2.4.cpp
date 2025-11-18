#include<iostream>
using namespace std;
int main() {
	float x, y, z;
	char a;
	cin >> x >> a >> y;
	switch (a) {
	case'+':z = x + y; break;
	case'-':z = x - y; break;
	case'*':z = x * y; break;
	case'/': {
		if (y == 0)
			cout << "无意义" << endl;
		else z = x / y; } break;
	case'%':z = int(x) % int(y); break;
	default:cout << "无意义" << endl;}
	cout << z << endl;return 0;
}