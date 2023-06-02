#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int t[b][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>t[j][i];
		}
	}
	for(int i=0;i<b;i++){
		for(int j=0;j<a;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
}
