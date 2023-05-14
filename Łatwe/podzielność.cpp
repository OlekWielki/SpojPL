#include<iostream>
using namespace std;
int main(){
	int a,n,x,y;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>n>>x>>y;
		for(int j=1;j<=n;j++){
			if(j%x==0 && j%y!=0){
				cout<<j<<endl;
			}
		}
	}
}
