#include<iostream>
using namespace std;
int main(){
    char l;
    string tekst;
    while(cin>>l>>tekst){
        int dl=tekst.size();
        for(int i=0;i<dl;i++){
            if(tekst[i]==l){

            }
            else{
                cout<<tekst[i];
            }
        }
        cout<<endl;
    }
}
