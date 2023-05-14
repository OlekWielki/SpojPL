#include<iostream>
using namespace std;
int tab[1001];
int main(){
	string nazwisko;
	int a,ile,max=0,c=0;
	cin>>ile;
	for(int i=0;i<ile;i++){
		cin>>a>>nazwisko;
		if(a>max){
			max=a;
		}
		tab[a]++;
	}
	for(int i=1;i<=max;i++){
		if(tab[i]>0){
			c++;
		}
	}
	cout<<c;
}
