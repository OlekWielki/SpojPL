#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>b;
	string c;
	a=c.length();
	char n[b];
	for(int i=0;i<b;i++){
		cin>>n[i];
	}
	cin>>c;
	a=c.length();
	for(int i=0;i<a;i++){
		cout<<c[i];
		for(int j=0;j<b;j++){
			if(c[i]==n[j]){
				cout<<c[i];
			}
		}
	}
}
