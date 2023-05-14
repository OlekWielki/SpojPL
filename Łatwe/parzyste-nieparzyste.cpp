#include<iostream>
using namespace std;
int main(){
	int a,n,x,y;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>n;
		int tab[n];
		for(int j=1;j<=n;j++){
			cin>>tab[j];
		}
		for(int j=1;j<=n;j++){
			if(j%2==0){
				cout<<tab[j]<<" ";
			}
		}
		for(int j=1;j<=n;j++){
			if(j%2!=0){
				cout<<tab[j]<<" ";
			}
		}
	}
}
