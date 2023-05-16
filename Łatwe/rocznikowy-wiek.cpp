#include<iostream>
using namespace std;
int main(){
	int l,rok;
	cin>>l>>rok;
	l=l%10;
	l*=2;
	l+=5;
	l*=50;
	l+=1771;
	l-=rok;
	cout<<l%100;
}
