#include <iostream> 
using namespace std;  
int main(){   
	string txt;
	while(getline(cin,txt)){
		int dl=txt.size(), licz=0, slowa=0;
		for(int i=0;i<dl;i++){
			if(i==0){
				if(txt[i]<65){
					licz++;
				}
				else{
					slowa++;
				}
			}
			else{
				if(txt[i]<65&&txt[i-1]==' '){
					licz++;
				}
				else if(txt[i]>64&&txt[i-1]==' '){
					slowa++;
				}				
			}
		}
		cout<<licz<<" "<<slowa<<endl;
	}
}  
