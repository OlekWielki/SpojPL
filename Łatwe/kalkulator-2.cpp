#include<iostream>
using namespace std;
int main(){
	char znak;
	int cyfra,cyfrad,tab[10];
	while(cin>>znak>>cyfra>>cyfrad){
		if(znak=='z'){
			tab[cyfra]=cyfrad;
		}
		if(znak=='+'){
			cout<<tab[cyfra]+tab[cyfrad]<<endl;
		}
		if(znak=='-'){
			cout<<tab[cyfra]-tab[cyfrad]<<endl;
		}
		if(znak=='*'){
			cout<<tab[cyfra]*tab[cyfrad]<<endl;
		}
		if(znak=='/'){
			cout<<tab[cyfra]/tab[cyfrad]<<endl;
		}
		if(znak=='%'){
			cout<<tab[cyfra]%tab[cyfrad]<<endl;
		}
	}
}
