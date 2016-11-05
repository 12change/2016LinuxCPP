#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
int main(){
	srand((int)time(0));
	int rs = 1+rand()%52;
	cout<<rs;
	return 0;
}
