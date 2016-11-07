#include<bits/stdc++.h>
using namespace std;
const int maxn = 1000;
int a[maxn];
int size ;

void sswap(int i,int j){
	int temp = a[i];
	a[i]=a[j];
	a[j]=temp;
}
void swap(int i,int j){
	if(i==j)
		return;
	a[i] ^= a[j];
	a[j] ^= a[i];
	a[i] ^= a[j];
	return;
}
void up(int k){
	if(k>size){
		return;
	}
	while(k>1&&a[k]<a[k>>1]){
		swap(k,k>>1);
		k = k>>1;
	}
	return;
}
void down(int k){
	int i = k;
	while(2*i<=size){
		int j = (2*i==size||a[2*i]<a[2*i+1])?2*i:2*i+1;
		if(a[i]>a[j]){
			swap(i,j);
		}
		else{
			break;
		}
	}
	return;
}
void add(int newnum){
	a[++size]=newnum;
	up(size);
	return;
}
void remove(int index=1){
	swap(index,size);
	size--;
	down(index);
	return;
}
int main(){
	size = 0;
	int n;
	cout <<"please input n:"; 
	cin >> n;
	int temp;
	cout <<"please input array:"; 	
	for(int i = 0 ; i < n; i++){
		cin >> temp;
		add(temp);
	}
	for(int i = 1 ; i < n+1; i++){
		cout << a[1] <<" ";
		remove();
	}
	return 0;
} 

