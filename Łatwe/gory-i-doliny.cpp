#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int ile, tab[1000000], sum=0;
	cin>>ile;
	for(int i=0;i<ile;i++){
		cin>>tab[i];
	}
	for(int i=1;i<ile-1;i++){
		if(tab[i]>tab[i-1] && tab[i+1]<tab[i]){
			sum++;
		}
	}
	cout<<sum;
}
