#include<iostream>
#include<string>
using namespace std;
int tab[200];
int main(){
	int ile;
	cin>>ile;
	ile++;
	while(ile--){
		string tekst;
		getline(cin,tekst);
		int dl=tekst.size();
		for(int i=0;i<dl;i++){
			if(tekst[i]!=' '){
				tab[tekst[i]]++;
			}
		}
	}
	for(int i=97;i<=122;i++){
		if(tab[i]>0){
			char znak=i;
			cout<<znak<<" "<<tab[i]<<endl;
		}
	}
	for(int i=65;i<=90;i++){
		if(tab[i]>0){
			char znak=i;
			cout<<znak<<" "<<tab[i]<<endl;
		}
	}
}
