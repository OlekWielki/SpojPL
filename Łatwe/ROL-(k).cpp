#include<iostream>
using namespace std;
int main(){
	int a,n,x,y;
	cin>>a>>n;
	int tab[a];
	for(int i=0;i<a;i++){
		cin>>tab[i];
	}
	for(int i=n;i<a;i++){
		cout<<tab[i]<<" ";
	}
	for(int i=0;i<n;i++){
		cout<<tab[i]<<" ";
	}
}
