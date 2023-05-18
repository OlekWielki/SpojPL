#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int ile,sum=0;
	cin>>ile;
	int tab[ile];
	for(int i=0;i<ile;i++){
		cin>>tab[i];
	}
	for(int i=2;i<ile;i++){
		if(tab[i-2]+tab[i-1]==tab[i]){
			sum++;
		}
	}
	cout<<sum;
}
