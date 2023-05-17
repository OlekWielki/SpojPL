#include<iostream>
#include<string>
using namespace std;
int main(){
	string kod;
	while(getline(cin,kod)){
		string w="";
		int dl=kod.size();
		for(int i=0;i<dl;i++){
			if(kod[i]=='<'){
				while(kod[i]!='>'){
					if(kod[i]>96){
						kod[i]-=32;
					}
					w+=kod[i];
					i++;
				}
			}
			w+=kod[i];
		}
		cout<<w<<endl;
	}
}
