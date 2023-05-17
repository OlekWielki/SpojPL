#include<iostream>
using namespace std;
int main(){
	string snake,camel="";
	cin>>snake;
	int dl=snake.size();
	for(int i=0;i<dl;i++){
		if(snake[i]=='_'){
			i++;
		}
		if(snake[i-1]=='_'){
			camel+=snake[i]-32;
		}
		else{
			camel+=snake[i];
		}
	}
	cout<<camel;
}
