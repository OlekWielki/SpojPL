#include <iostream>
using namespace std;
int main(){
    int a,p=0,s;
    cin>>a;
    s=a;
    cout<<a<<endl;
    while(cin>>a){
        if(p<3){
            if(a==42&&s!=42){
                p++;
            }
            cout<<a<<endl;
        }
        s=a;
    }
}
