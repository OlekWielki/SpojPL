#include<iostream>
using namespace std;
int main(){
	int a,sum=0,ile=3,k=0,m=0;
	while(ile--){
		cin>>a;
		sum+=a;
	}
	for(int i=0;i<sum;i++){
		string imie;
		cin>>imie;
		int dl=imie.size();
		if(imie[dl-1]=='a'){
			k++;
		}
		else{
			m++;
		}
	}
	if(k<=m){
		cout<<k;
	}
	else{
		cout<<m;
	}
}
