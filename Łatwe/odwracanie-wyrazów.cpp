#include <iostream>
#include <string>
using namespace std;
int main(){
    string tekst;
    while(cin>>tekst){
        int dl=tekst.size();
        for(int i=dl-1;i>=0;i--){
            cout<<tekst[i];
        }
        cout<<endl;
    }
}
