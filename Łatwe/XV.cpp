#include<iostream>
using namespace std;
string XV(string liczba){
	int dl=liczba.size(), suma=0;
	if(liczba[dl-1]=='5' || liczba[dl-1]=='0'){
		for(int i=0;i<dl;i++){
			suma+=liczba[i]-48;
		}
		if(suma%3==0){
			return "TAK";
		}
		else{
			return "NIE";
		}
	}
	return "NIE";
}
int main(){
	string liczba;
	while(cin>>liczba && liczba[0]!='0'){
		cout<<XV(liczba)<<endl;
	}
}
