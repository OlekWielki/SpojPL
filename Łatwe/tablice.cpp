#include <iostream>
using namespace std;
int main(){
	int a,b;
	int tab[100];
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		for(int j=0;j<b;j++){
			cin>>tab[j];
			}
		for(int j=b-1;j>=0;j--){
			cout<<tab[j]<<" ";
			}
	}
}
