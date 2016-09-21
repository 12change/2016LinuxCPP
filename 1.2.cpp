#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float capital;
	float interest;
	cin >> capital >> interest;
	cout.setf(ios::fixed);
	cout<<setprecision(2)<<(1+interest)*capital;
	return 0;
}