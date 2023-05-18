#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int ile, online;
	int sum=0;
	for(int i=0;i<4;i++){
		cin>>ile>>online;
		sum+=ile-online;
	}
	cout<<sum;
}
