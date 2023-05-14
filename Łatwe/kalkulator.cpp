#include<iostream>
using namespace std;
int main(){
	int l,s=0,a,b;
	char z;
	while(cin>>z>>a>>b){
		if(z=='+'){
			cout<<a+b<<endl;
		}
		else if(z=='-'){
			cout<<a-b<<endl;
		}
		else if(z=='*'){
			cout<<a*b<<endl;
		}
		else if(z=='/'){
			cout<<a/b<<endl;
		}
		else if(z=='%'){
			cout<<a%b<<endl;
		}
	}
}
