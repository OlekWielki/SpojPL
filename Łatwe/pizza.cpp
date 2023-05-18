#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int ile;
	float mi,ms,gi,gs;
	cin>>ile;
	while(ile--){
		cin>>mi>>ms>>gi>>gs;
		ms/=2;
		gs/=2;
		if(mi*(3,14*pow(ms,2))>gi*(3,14*pow(gs,2))){
			cout<<"Maciek"<<endl;
		}
		else if(mi*(3,14*pow(ms,2))<gi*(3,14*pow(gs,2))){
			cout<<"Grzesiek"<<endl;
		}
		else{
			cout<<"porcje sa takie same"<<endl;
		}
	}
}
