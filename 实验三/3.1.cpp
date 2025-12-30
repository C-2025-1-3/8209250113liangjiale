#include<iostream>
using namespace std;
int function1(int a, int b) {
	int n, i;
	n = min(a, b);
	for (i = 1; i <= 10000000; i++) {
		if (a % n == 0 && b % n == 0)
			break;
		else n--;
	}
	return n;
}
int function2(int a, int b) {
	int m, i;
	m = max(a, b);
	for (i = 1; i <= 10000000; i++) {
		if (m % a == 0 && m % b == 0)
			break;
		else m++;
	}
	return m;
}
int main() {
	int m, n,c,d;
	cout << "请输入两个数：" << endl;
	cin  >> m >> n;
	c = function1(m, n);
	d = function2(m, n);
	cout << "它们的最大公因数是：" << c << endl;
	cout << "它们的最小公倍数是：" << d << endl;
	return 0;
}