#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int a=4;
	string w="";
	while(a--){
		string bin;
		cin>>bin;
		reverse(bin.begin(), bin.end());
		int dl=bin.size();
		int sum=0;
		for(int i=0;i<dl;i++){
			if(bin[i]=='1')
				sum+=pow(2,i);
		}
		w+=sum+48;
		if(a==2){
			w+=':';
		}
	}
	cout<<w;
}
