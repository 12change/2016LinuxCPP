#include"7.1_real.h"
#include<iostream>
using namespace std;
int main(){
	real fst = create_real(1,6);
	real scd = create_real(6,7);
	real rs = div(fst,scd);
	cout<<rs.p<<'/'<<rs.q;
	return 0;
}
