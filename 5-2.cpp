#include<iostream>
#include <cstdlib>
#include <ctime>

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
	if(b<10){
		cout << b+1;
	}
	else if(b==10){
		cout << 'J';
	}
	else if(b==11){
		cout << 'Q';
	}
	else if(b=='K'){
		cout << 'K';
	}
	else
		cout<<'A';
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
int main(){
	bool flag[52]={0};
	srand((int)time(0));
	for(int i = 0 ; i < 52 ; i++){
		int tmp = myrand();
		if(flag[tmp]){
			i--;
			continue;
		}
		else{
			flag[tmp]=true;
			prtsq(tmp);
			cout<<endl;
		}
	}
	return 0;
	

}
