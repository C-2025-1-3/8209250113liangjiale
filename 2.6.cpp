#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b;
	c = max(a, b);
	d = min(a, b);
	while (c % a != 0 || c % b != 0)
		c++;
	while (a % d != 0 || b % d != 0)
		d--;
	cout << "最大公倍数是：" << c << endl << "最大公约数是：" << d << endl;
	return 0;
}