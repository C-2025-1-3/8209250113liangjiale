#include<iostream>
using namespace std;
int main() {
	int sum = 1, n;
	for (n = 9; n >= 1; n--) {
		sum = (sum + 1) * 2;
	}
	cout << "第一天猴子共摘" << sum << "个桃子" << endl;
	return 0;
}