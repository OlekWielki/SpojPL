#include<iostream>
using namespace std;
int main(){
	string tekst;
	bool czySto=0;
	cin>>tekst;
	int dl=tekst.size();
	for(int i=0;i<dl;i++){
		if(tekst[i]=='s' && tekst[i+1]=='t' && tekst[i+2]=='o'){
			czySto=1;
			i++;
			i++;
		}
	}
	if(czySto==1){
		cout<<"TAK";
	}
	else{
		cout<<"NIE";
	}
}
