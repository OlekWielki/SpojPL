#include<iostream>
using namespace std;
int main(){
	bool czy=0;
	string a;
	cin>>a;
	int dl=a.size(),b=0;
	for(int i=0;i<dl;i++){
		if(a[i]=='+'){
			b++;
		}
		else if(a[i]=='-'){
			b--;
		}
		if(b==3){
			cout<<5<<" ";
			b=0;
			czy=1;
		}
		else if(b==-3){
			cout<<1<<" ";
			b=0;
			czy=1;
		}
	}
	if(czy==0){
		cout<<"BRAK";
	}
}
