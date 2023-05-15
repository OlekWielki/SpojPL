#include<iostream>
using namespace std;
int main(){
	int l,p,d;
	cin>>l>>p>>d;
	if(d!=33){
		if(l<p){
			cout<<"W LEWO";
		}
		if(p<l){
			cout<<"W PRAWO";
		}
	}
	else{
		cout<<"WRACAJ";
	}
}
