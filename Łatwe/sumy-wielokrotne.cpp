#include <iostream>
using namespace std;

int main() {

long long a,b,c,s=0,s1=0;
   
    while(cin>>a){
        s+=a;
        if(a==0){
            cout<<s<<endl;
            s1+=s;
            s=0;
        }
    }
    cout<<s1;

}
