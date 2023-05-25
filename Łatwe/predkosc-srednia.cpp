#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int v1,v2,ile;
	cin>>ile;
	for(int i=0;i<ile;i++){
		cin>>v1>>v2;
		cout<<2*v1*v2/(v1+v2)<<endl;
	}
}
