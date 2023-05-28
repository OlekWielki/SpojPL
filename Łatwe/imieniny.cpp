#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int ile, klasa, cuk;
	cin>>ile;
	while(ile--){
		cin>>klasa>>cuk;
		if(klasa-1!=0){
			if(cuk%(klasa-1)==0){
				cout<<"NIE"<<endl;
			}
			else{
				cout<<"TAK"<<endl;
			}
		}
		else{
			cout<<"TAK"<<endl;
		}
	}
}
