#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int b1=c*a,b2=c*b,d=a*b;
	int puszki=0;
	int sciany = b1*2+b2*2;
	puszki+=sciany/5;
	if(sciany%5!=0){
		puszki++;
	}
	puszki+=d/3;
	if(d%3!=0){
		puszki++;
	}
	cout<<puszki;
}
