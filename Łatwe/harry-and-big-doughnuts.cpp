#include<iostream>
using namespace std;
int main(){
	int ile,k,u,w;
	cin>>ile;
	while(ile--){
		cin>>k>>u>>w;
		if(k*w>u){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}
