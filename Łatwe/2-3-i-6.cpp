#include<iostream>
using namespace std;
int main(){
	int a,b;
	string w="";
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(i%6==0){
			w+="ab";
		}
		else if(i%2==0){
			w+='a';
		}
		else if(i%3==0){
			w+='b';
		}
	}
	cout<<w;
}
