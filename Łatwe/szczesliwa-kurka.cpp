#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int jaja;
	cin>>jaja;
	float cena=0;
	if(jaja>=1000){
		cena+=500;
		jaja-=1000;
		cena+=jaja;
	}
	else if(jaja>=900){
		cena+=jaja*0.45;
	}
	else if(jaja>=800){
		cena+=jaja*0.4;
	}
	else if(jaja>=700){
		cena+=jaja*0.35;
	}
	else if(jaja>=600){
		cena+=jaja*0.3;
	}
	else if(jaja>=500){
		cena+=jaja*0.25;
	}
	else if(jaja>=400){
		cena+=jaja*0.2;
	}
	else if(jaja>=300){
		cena+=jaja*0.15;
	}
	else if(jaja>=200){
		cena+=jaja*0.1;
	}
	else if(jaja>=100){
		cena+=jaja*0.05;
	}
	cout<<cena;
}
