#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float c,f;
	cout << "华氏温度是：";
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "摄氏温度是：" << fixed<<setprecision(2)<<c<<endl;


}