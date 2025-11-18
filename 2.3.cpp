#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c,C;
	cout << "三角形的三条边分别为：";
	cin >>a >> b >> c;
	if (c<(a + b) && c>(fabs(a - b))) {
		C = a + b + c;
		cout << "三角形的周长为：" << C << endl;
	 if (a == b or a == c or b == c)
		cout << "该三角形是等腰三角形" << endl;
	}
	else
		cout << "不能构成三角形" << endl;
	return 0;
}