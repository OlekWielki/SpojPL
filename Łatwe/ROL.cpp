#include <iostream>
using namespace std;
int main(){
	int a,b;
	int tab[101];
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		for(int j=0;j<b;j++){
			cin>>tab[j];
			}
		for(int j=1;j<b;j++){
			cout<<tab[j]<<" ";
			}
		cout<<tab[0]<<" ";
	}
}
