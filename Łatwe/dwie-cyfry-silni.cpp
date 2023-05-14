#include <iostream>
using namespace std;
int main(){
    int n,a,b=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
    if(a==0)
        cout<<"0"<<" "<<"1"<<endl;
    else if(a==1)
        cout<<"0"<<" "<<"1"<<endl;
    else if(a==2)
        cout<<"0"<<" "<<"2"<<endl;
    else if(a==3)
        cout<<"0"<<" "<<"6"<<endl;
    else if(a==4)
        cout<<"2"<<" "<<"4"<<endl;
    else if(a==5)
        cout<<"2"<<" "<<"0"<<endl;
    else if(a==6)
        cout<<"2"<<" "<<"0"<<endl;
    else if(a==7)
        cout<<"4"<<" "<<"0"<<endl;
    else if(a==8)
        cout<<"2"<<" "<<"0"<<endl;
    else if(a==9)
        cout<<"8"<<" "<<"0"<<endl;
    else if(a>9)
        cout<<"0"<<" "<<"0"<<endl;
    }
}
