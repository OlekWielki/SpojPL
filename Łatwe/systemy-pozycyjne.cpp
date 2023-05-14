#include<iostream>
#include<algorithm>
using namespace std;
string szesn(int zam){
	string w="";
	while(zam!=0){
		if(zam%16<10){
			w+=(zam%16)+48;
			zam/=16;
		}
		else{
			w+=(zam%16)+55;
			zam/=16;
		}
	}
	reverse(w.begin(),w.end());
	return w;
}
string jedn(int zam){
	string w="";
	while(zam!=0){
		if(zam%11<10){
			w+=(zam%11)+48;
			zam/=11;
		}
		else{
			w+=(zam%11)+55;
			zam/=11;
		}
	}
	reverse(w.begin(),w.end());
	return w;
}
int main(){
	int ile;
	cin>>ile;
	while(ile--){
		int zam;
		cin>>zam;
		cout<<szesn(zam)<<endl;
		cout<<jedn(zam)<<endl;
	}
}
