#include<bits/stdc++.h>
using namespace std;
bool binary_search(int a[],int target,int first,int last){
	int low = first;
	int high = last;
	while(low+1<high){
		int mid = low/2+(high-low)/2;
		if(a[mid]==target){
			return true;
		}
		else if(a[mid]<target){
			high = mid;
			continue;
		}
		else{
			low = mid;
			continue;
		}
	}
	return false;
}
