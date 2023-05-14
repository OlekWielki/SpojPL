#include<iostream>
using namespace std;
int main(){
	int r,l,a,s=0;
	cin>>r;
	for(int i=0;i<r;i++){
		cin>>l;
		for(int j=0;j<l;j++){
			cin>>a;
			s+=a;
		}
		cout<<s<<endl;
		s=0;
	}
}
