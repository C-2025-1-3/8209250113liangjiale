#include<iostream>
using namespace std;
int main() {
	char x;
	cin >> x;
	if (int(x) >= 97 && int(x) <= 122)
		cout << char(x - 32) << endl;
	else cout << int(x) + 1 << endl;
	return 0;
}