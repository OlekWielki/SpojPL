#include<iostream>
using namespace std;
int main(){
    char l;
    int n,c;
    cin>>n;
    int tab[n];
    for(int i=0;i<n;i++){
        cin>>tab[i];
    }
    cin>>l>>c;
    if(l=='>'){
        for(int i=0;i<n;i++){
            if(tab[i]>c){
                cout<<tab[i]<<endl;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(tab[i]<c){
                cout<<tab[i]<<endl;
            }
        }
    }
}
