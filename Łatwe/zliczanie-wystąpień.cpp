#include <iostream>
#include <string>
using namespace std;
int main(){
    int co,ile,sum=0;
    while(cin>>co>>ile){
        int tab[ile];
        for(int i=0;i<ile;i++){
            cin>>tab[i];
        }
        for(int i=0;i<ile;i++){
            if(tab[i]==co){
                sum++;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
}
