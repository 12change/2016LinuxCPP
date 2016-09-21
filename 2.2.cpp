#include <iostream>
using namespace std;
int main(){
	cout << "Calendar 2016-01"<<endl;
	cout << "--------------------------------"<<endl;
	cout << "Su   Mo   Tu   We   Th   Fr   Sa"<<endl;
	cout << "--------------------------------"<<endl;
	cout << "                         ";
	int day =0;
	while( day < 31 ){
		day++;
		cout << day << "   ";
		if(day<10)
			cout<<' ';
		if((day+5)%7)
			continue;
		else 
			cout << endl;
	}
	cout << endl;
	return 0;
}