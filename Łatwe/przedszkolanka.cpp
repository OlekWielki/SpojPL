#include<iostream>
using namespace std;
int main(){
	int wa, wb;
	int a,b,c;
	cin>>c;
	while(c--){
		cin>>a>>b;
		wa=a;
		wb=b;
		while(a!=b){
			if(a>b){
				b+=wb;
			}
			if(b>a){
				a+=wa;
			}
		}
		cout<<a<<endl;
	}
}
