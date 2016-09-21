#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
	int m,n;
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
	{
		int j=0;
		while(++j<m-i){
			printf(" ");
		}
		--j;
		while(++j<=m+i){
			printf("*");
		}
		--j;
		while(++j<=m+i+n){
			printf(" ");
		}
		--j;
		while(++j<3*m+n-i){
			printf("*");
		}
		printf("\n");
		continue;
    }
	return 0;
}



