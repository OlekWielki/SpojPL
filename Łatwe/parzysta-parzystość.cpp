#include <iostream>
#include <string>
using namespace std;
string parzysta(string bum){
    int dl=bum.size();
    for(int i=0;i<dl;i++){
        if(bum[i]=='0'||bum[i]=='2'||bum[i]=='4'||bum[i]=='6'||bum[i]=='8'){
            return "Tak";
        }
    }
    return "Nie";
}
int main(){
    string bum;
    cin>>bum;
    cout<<parzysta(bum);
}
