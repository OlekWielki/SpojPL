#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	string kod;
	while(getline(cin, kod)){
		string w="";
		int dl=kod.size();
		w+=kod[0];
		for(int i=1;i<dl;i++){
			if(kod[i-1]==' ' && kod[i-2]=='.'){
				w+=' ';
				w+=kod[i];
			}
			if(kod[i-1]==' ' && kod[i-2]!='.'){
				w+=kod[i];
			}
		}
		cout<<w<<endl;
	}
}
