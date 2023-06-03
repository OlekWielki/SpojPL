#include <iostream> 
using namespace std;  
int main(){   
	int ile;
	cin>>ile;
	while(ile--){
		int ile2;
		cin>>ile2;
		int pp=0,wz=0;
		while(ile2--){
			int kier, krok;
			cin>>kier>>krok;
			if(kier==0){
				pp+=krok;
			}
			else if(kier==1){
				pp-=krok;
			}
			else if(kier==2){
				wz-=krok;
			}
			else{
				wz+=krok;
			}
		}
		int kier1, kier2;
		if(pp>0){
			kier1=0;
		}
		else{
			kier1=1;
			pp*=-1;
		}
		if(wz<0){
			kier2=2;
			wz*=-1;
		}
		else{
			kier2=3;
		}
		if(pp==0 && wz==0){
			cout<<"studnia"<<endl;
		}
		else if(pp==0){
			cout<<kier2<<" "<<wz<<endl;
		}
		else if(wz==0){
			cout<<kier1<<" "<<pp<<endl;
		}
		else{
			cout<<kier1<<" "<<pp<<endl;
			cout<<kier2<<" "<<wz<<endl;
		}
	}
}  
