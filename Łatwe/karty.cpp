#include <iostream>
using namespace std;

int main() {
	string jas,stas;
	cin>>jas>>stas;
	int sjas=0,sstas=0;
	int dljas=jas.size();
	int dlstas=stas.size();
	for(int i=0;i<dljas;i++){
		if(jas[i]=='2'){
			sjas+=2;
		}
		if(jas[i]=='3'){
			sjas+=3;
		}
		if(jas[i]=='4'){
			sjas+=4;
		}
		if(jas[i]=='5'){
			sjas+=5;
		}
		if(jas[i]=='6'){
			sjas+=6;
		}
		if(jas[i]=='7'){
			sjas+=7;
		}
		if(jas[i]=='8'){
			sjas+=8;
		}
		if(jas[i]=='9'){
			sjas+=9;
		}
		if(jas[i]=='T'){
			sjas+=10;
		}
		if(jas[i]=='J'){
			sjas+=11;
		}
		if(jas[i]=='Q'){
			sjas+=12;
		}
		if(jas[i]=='K'){
			sjas+=13;
		}
		if(jas[i]=='A'){
			sjas+=14;
		}
	}
	for(int i=0;i<dlstas;i++){
		if(stas[i]=='2'){
			sstas+=2;
		}
		if(stas[i]=='3'){
			sstas+=3;
		}
		if(stas[i]=='4'){
			sstas+=4;
		}
		if(stas[i]=='5'){
			sstas+=5;
		}
		if(stas[i]=='6'){
			sstas+=6;
		}
		if(stas[i]=='7'){
			sstas+=7;
		}
		if(stas[i]=='8'){
			sstas+=8;
		}
		if(stas[i]=='9'){
			sstas+=9;
		}
		if(stas[i]=='T'){
			sstas+=10;
		}
		if(stas[i]=='J'){
			sstas+=11;
		}
		if(stas[i]=='Q'){
			sstas+=12;
		}
		if(stas[i]=='K'){
			sstas+=13;
		}
		if(stas[i]=='A'){
			sstas+=14;
		}
	}
	if(sstas>sjas){
		cout<<"STASIO";
	}
	else if(sstas<sjas){
		cout<<"JASIO";
	}
	else{
		cout<<"REMIS";
	}
	return 0;
}
