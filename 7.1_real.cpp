#include"7.1_real.h"
#include<cmath>
#include<cstdlib>
real create_real(int a, int b){
	if(b==0)
		exit(1);
	real rs;
	rs.p=a;
	rs.q=b;
	return rs;
}
real plus(real a, real b){
	real rs;
	rs.p=b.q*a.p+a.q*b.p;
	rs.q=a.q*b.q;
	for(int i = 2; i < rs.q;i++){
		if(rs.q%i==0&&rs.p%i==0){
			rs.q/=i;
			rs.p/=i;
		}
	}
	if(rs.q==0)
		exit(1);
	if(rs.p<0&&rs.q<0){
		rs.p=abs(rs.p);
		rs.q=abs(rs.q);
	}
	return rs;
}
real minux(real a,real b){
	real rs;
	rs.p=b.q*a.p-a.q*b.p;
	rs.q=a.q*b.q;
	for(int i = 2; i < rs.q;i++){
		if(rs.q%i==0&&rs.p%i==0){
			rs.q/=i;
			rs.p/=i;
		}
	}
	if(rs.q==0)
		exit(1);
	if(rs.p<0&&rs.q<0){
		rs.p=abs(rs.p);
		rs.q=abs(rs.q);
	}
	return rs;
}
real mul(real a,real b){
	real rs;
	rs.p=a.p*b.p;
	rs.q=a.q*b.q;
	for(int i = 2; i < rs.q;i++){
		if(rs.q%i==0&&rs.p%i==0){
			rs.q/=i;
			rs.p/=i;
		}
	}
	if(rs.q==0)
		exit(1);
	if(rs.p<0&&rs.q<0){
		rs.p=abs(rs.p);
		rs.q=abs(rs.q);
	}
	return rs;
}
real div(real a,real b){
	real rs;
	rs.p=a.p*b.q;
	rs.q=a.q*b.p;
	for(int i = 2; i < rs.q;i++){
		if(rs.q%i==0&&rs.p%i==0){
			rs.q/=i;
			rs.p/=i;
		}
	}
	if(rs.q==0)
		exit(1);
	if(rs.p<0&&rs.q<0){
		rs.p=abs(rs.p);
		rs.q=abs(rs.q);
	}
	return rs;
}
