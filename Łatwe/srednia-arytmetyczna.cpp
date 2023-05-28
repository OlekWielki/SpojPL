#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int ile;
	cin>>ile;
	while(ile--){
		int l;
		cin>>l;
		float t[l], sum=0;
		int ind;
		for(int i=0;i<l;i++){
			cin>>t[i];
			sum+=t[i];
		}
		float sr=sum/l, min=1000;
		for(int i=0;i<l;i++){
			if(sr>t[i]){
				if(sr-t[i]<min){
					min=sr-t[i];
					ind=i;
				}
			}
			else if(sr<t[i]){
				if(t[i]-sr<min){
					min=t[i]-sr;
					ind=i;
				}
			}
			else{
				min=0;
				ind=i;
			}
		}
		cout<<t[ind]<<endl;
	}
}
