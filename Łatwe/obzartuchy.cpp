#include <iostream> 
using namespace std;  
int main(){   
	int ile;
	cin>>ile;
	while(ile--){
		//ilosc obzartuchow, ciastka w pudelku, ilosc czasu
		int o,c,t,doba=86400,liczCias=0;
		cin>>o>>c;
		while(o--){
			cin>>t;
			liczCias+=doba/t;
		}
		if(liczCias%c!=0)
			cout<<(liczCias/c)+1<<endl;
		else
			cout<<liczCias/c<<endl;
	}
}  
