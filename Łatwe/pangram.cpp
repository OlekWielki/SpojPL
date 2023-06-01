#include<iostream>
using namespace std;
int t[1000];
int main(){
	string tek;
	bool z=1;
	cin>>tek;
	for(int i=0;i<tek.size();i++){
		t[tek[i]]++;
	}
	for(int i='a';i<='z';i++){
		if(t[i]==0){
			z=0;
		}
	}
	if(z==0){
		cout<<"NIE";
	}
	else if(tek.size()%26!=0){
		cout<<"PANGRAM";
	}
	else{
		cout<<"PANGRAM PERFEKCYJNY";
	}
}
