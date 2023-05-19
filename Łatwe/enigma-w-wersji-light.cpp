#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	string tekst;
	while(getline(cin, tekst)){
		int dl=tekst.size();
		for(int i=0;i<dl;i+=2){
			if(i<dl-1){
				swap(tekst[i],tekst[i+1]);
			}
		}
		cout<<tekst<<endl;
	}
}
