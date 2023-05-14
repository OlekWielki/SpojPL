#include<iostream>
using namespace std;
int NWD(int a, int b){
	int p;
	while(b!=0){
		p=a;
		a=b;
		b=p%b;
	}
	return a;
}
int main(){
	int a,b,c;
	cin>>c;
	for(int i=0;i<c;i++){
	cin>>a>>b;
	cout<<NWD(a,b)<<endl;
}
}
