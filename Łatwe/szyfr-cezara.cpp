#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string cezar(string tekst){
	int dl=tekst.size();
	for(int i=0;i<dl;i++){
		if(tekst[i]!=' '){
			tekst[i]+=3;
		}
		if(tekst[i]>'Z'){
			tekst[i]-=26;
		}
	}
	return tekst;
}
int main(){
	string tekst;
	while(getline(cin, tekst)){
		cout<<cezar(tekst)<<endl;
	}
}
