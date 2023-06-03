#include <iostream> 
using namespace std;  
int main(){   
	int a,b;
	cin>>a>>b;
	b*=2;
	b-=a;
	if(b>=15&&b<=30){
		cout<<b;
	}
	else{
		cout<<"NIE DA SIE";
	}
}  
