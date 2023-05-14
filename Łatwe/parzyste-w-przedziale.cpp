#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int b,c;
		bool o=0;
		cin>>b>>c;
		for(int i=b+1;i<c;i++){
			if(i%2==0){
				cout<<i<<" ";
				o=1;
			}
		}
		if(o==0){
			cout<<"BRAK"<<endl;
		}
		else{
			cout<<endl;
		}
	}
}
