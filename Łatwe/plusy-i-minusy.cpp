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
	}
	if(b>=3){
		for(int i=0;i<b/3;i++){
			cout<<5<<" ";
		}
	}
	else if(b<=-3){
		b*=-1;
		for(int i=0;i<b/3;i++){
			cout<<1<<" ";
		}
	}
	else{
		cout<<"BRAK";
	}
}
