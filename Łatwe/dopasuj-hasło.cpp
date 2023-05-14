#include <iostream>
#include <string>
using namespace std;
string haslo(int ile,string tekst,string test){
    int dl = tekst.size();
    int dld = test.size();   
    if(dl==dld){
        for(int i=0;i<dl;i++){
            if(test[i]!=tekst[i] && test[i]!='*'){
                return "error";
            }
        }
        return "ok";
    }
    else{
        return "error";
    }
}
int main(){
    int ile;
    string tekst,test;
    cin>>ile;
    for(int i=0;i<ile;i++){
        cin>>tekst>>test;
        cout<<haslo(ile,tekst,test)<<endl;
    }
}
