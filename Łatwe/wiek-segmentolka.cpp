#include<iostream>
using namespace std;
int main(){
	int ile;
	cin>>ile;
	while(ile--){
		int seg, noz,sum=0;
		cin>>seg;
		for(int i=0;i<seg;i++){
			cin>>noz;
			sum+=noz;
		}
		sum+=seg-1;
		cout<<sum<<endl;
	}
}
