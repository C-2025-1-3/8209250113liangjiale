#include<iostream>
using namespace std
int main()
{
	const float pi = 3.14;
	double r, h, V;
	cout << "圆锥的半径: ";
	cin >> r;
	cout << "圆锥的高: ";
	cin >> h;
	V = (pi * r * r * h) / 3;
	cout << "圆锥的体积是：" <<V<< endl;
	return 0;


}