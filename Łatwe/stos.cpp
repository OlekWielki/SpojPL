#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int>stos;
	char z;
	int l;
	while(cin>>z){
		if(z=='-'){
			if(stos.empty()==1){
				cout<<":("<<endl;
			}
			else{
				cout<<stos.top()<<endl;
				stos.pop();
			}
		}
		else if(z=='+'){
			cin>>l;	
			if(stos.size()<10){
				stos.push(l);
				cout<<":)"<<endl;
			}
			else{
				cout<<":("<<endl;
			}
		}
		else{
			cout<<"':(')"<<endl;
		}
	}
}
