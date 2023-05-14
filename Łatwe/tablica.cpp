#include<iostream>
using namespace std;
int main(){
	int tab[10000],i=0,b;
	while(cin>>tab[i]){
		i++;
	}

	for(int j=i-1;j>=0;j--){
		cout<<tab[j]<<endl;
	}
}
