#include<iostream>
using namespace std;
int cffcnt_re(int n, int k){
	if (k==0)
		return 1;
	else if(k==1)
		return n;
	else if(k>n/2)
		return cffcnt_re(n,n-k);
	else
		return n*cffcnt_re(n-1,k-1)/k;
}
int cffcnt_lp(int n, int k){
	if (k==0)
		return 1;
	if(k>n/2)
		k=n-k;
	double result=1;
	while(k>0){
		result*=n;
		result/=k;
		n--;
		k--;
	}
	return result;
}
int main(int argc, char const *argv[])
{
	int n , k ;
	cin >> n >> k;
	cout << "递归：" << cffcnt_re(n,k) << endl;
	cout << "循环：" << cffcnt_lp(n,k) << endl;
	return 0;
}