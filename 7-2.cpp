#include<bits/stdc++.h>

using namespace std;  
void pt(int a){
	switch(a){
		case 0: cout <<"Ã·»¨";break;
		case 1: cout <<"·½¿é";break;
		case 2: cout <<"ºìÌÒ";break;
		case 3: cout <<"ºÚÌÒ";break;
	}
}
void ptd(int b){
	if(b<9){
		cout <<setiosflags(ios::left)<<setw(3)<< b;
	}
	else if(b==10){
		cout << "J  ";
	}
	else if(b==11){
		cout << "Q  ";
	}
	else if(b==12){
		cout << "K  ";
	}
	else
		cout<<"A  ";
}
int myrand(){
	int rs = 1+rand()%52;
	return rs;
}
void prtsq(int a){
	int a0 = a/13;
	int b0 = a%13;
	pt(a0); 
	ptd(b0);
}
void todo(int a,int g,int point[],vector<int> order[]){
	order[g].push_back(a);
	point[g]+=(a%13>=10?a%13-9:0);
}
int main(){
	bool flag[52]={0};
	srand((int)time(0));
	int point[4]={0};
	vector<int> order[4];
	for(int i = 0 ; i < 52 ; i++){
		int tmp = myrand();
		if(flag[tmp-1]){
			i--;
			continue;
		}
		else{
			flag[tmp-1]=true;
			todo(tmp-1,i/13,point,order);
		}
	}
	for(int i = 0 ; i <4 ; i++){
		sort(order[i].begin(),order[i].end());
		cout<<"Player"<<i+1<<" has:";
		for(int j = 0 ; j < 13 ; j++){
			prtsq(order[i][j]);
		}	
		cout<<endl;
	}
	for(int i = 0 ;  i<2 ; i++){
		cout <<"Points of Group "<<i<<" : "<<point[i]+point[i+2]<<endl;
	}
	return 0;
	

}
