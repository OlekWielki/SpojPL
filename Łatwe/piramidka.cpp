#include<iostream>
using namespace std;
int main(){
	int ile;
	string pir;
	cin>>ile>>pir;
	int pol=ile/2+1;
	while(pol--){
		int licz=0;
		for(int i=0;i<pol;i++){
			cout<<'.';
			licz++;
		}
		for(int i=licz;i<ile-licz;i++){
			cout<<pir[i];
		}
		for(int i=0;i<pol;i++){
			cout<<'.';
		}
		cout<<endl;
	}
}
