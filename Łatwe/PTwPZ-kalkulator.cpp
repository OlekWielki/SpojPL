#include<iostream>
#include<string>
using namespace std;
int main(){
	int ile,sum=0;
	string dzial;
	cin>>ile;
	while(ile--){
		cin>>dzial;
		int dl=dzial.size();
		sum+=dzial[0]-48; //dodaje pierwsza cyfre do sumy
		for(int i=1;i<dl;i++){  //sprawdzam znak i dodaje do sumy
			if(dzial[i]=='+'){
				sum+=dzial[i+1]-48;
				i++;
			}
			if(dzial[i]=='-'){
				sum-=dzial[i+1]-48;
				i++;
			}
		}
		cout<<sum<<endl;
		sum=0;
	}
}
