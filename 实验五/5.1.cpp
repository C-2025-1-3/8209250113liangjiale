#include<iostream>
using namespace std;
class Time            
{
	public:void print() {
		cin >>hour>>minute>>sec;
		cout <<hour << " £º" << minute << "£º" << sec << endl;
}
private:              
		int hour;
	int minute;
	int sec;
};
int main()
{
 Time t1;
 t1.print();
	return 0;
}