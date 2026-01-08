#include <iostream>
using namespace std;
class CFZ {
public:
	double length, width, height;
	CFZ() {
		length = 0;
		width = 0;
		height = 0;
	}
	void setV() {
		double l, w, h;
		cout << "请输入长方柱的长、宽、高：" << endl;
		cin >> l >> w >> h;
		length = l;
		width = w;
		height = h;
	}
	double V() {
		double V = 0;
		V = length * width * height;
		cout << "长方柱的体积为：" << V << endl;
		return V;
	}
};
int main() {
	CFZ c;
	for (int i = 0; i < 3; i++) {
		c.setV();
		c.V();
	}
	return 0;
}