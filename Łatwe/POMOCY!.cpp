#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
string zam(int co, int sys){
	string w="";
	if(co==0){
		return "1";
	}
	if(co==1){
		return "1";
	}
	while(co!=0){
		w+=co%sys;
		co/=sys;
	}
	return w;
}
int main(){
	int ile;
	cin>>ile;
	while(ile--){
		int co,sys;
		cin>>co>>sys;
		string t = zam(co,sys);
		cout<<t.size()<<endl;
	}
}
