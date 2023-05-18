#include<iostream>
#include<string>
using namespace std;
string szyfrowanie(string klucz, string sz){
	string wyj="";
	int dl=sz.size(), dlk=klucz.size(), ik=0;
	for(int i=0;i<dl;i++){
		if(ik==dlk){
			ik=0;
		}
		char znak=sz[i]+klucz[ik]-48;
		if(znak>90){
			znak-=26;
		}
		ik++;
		wyj+=znak;
	}
	return wyj;
}
string deszyfrowanie(string klucz, string sz){
	string wyj="";
	int dl=sz.size(), dlk=klucz.size(), ik=0;
	for(int i=0;i<dl;i++){
		if(ik==dlk){
			ik=0;
		}
		char znak=sz[i]-(klucz[ik]-48);
		if(znak<65){
			znak+=26;
		}
		ik++;
		wyj+=znak;
	}
	return wyj;
}
int main(){
	string co,sz;
	string klucz;
	cin>>co>>klucz>>sz;
	if(co=="SZYFRUJ"){
		cout<<szyfrowanie(klucz,sz);
	}
	else{
		cout<<deszyfrowanie(klucz,sz);
	}
}
