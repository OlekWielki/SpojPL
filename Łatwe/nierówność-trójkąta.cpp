#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	while(cin>>a>>b>>c){
		float w=a+b+c;
		float max=0;
		if(a>=b&&a>=c){
			max=a;
		}
		else if(b>=a&&b>=c){
			max=b;
		}
		else if(c>=b&&c>=a){
			max=c;
		}
		if(w-max>=max){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
}
