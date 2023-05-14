#include<iostream>
using namespace std;
int main(){
    string a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        int dl=a.size();
        for(int j=0;j<dl;j++){
            if(a[j]=='A'||a[j]=='B'||a[j]=='C'){
                cout<<2;
            }
            else if(a[j]=='D'||a[j]=='E'||a[j]=='F'){
                cout<<3;
            }
            else if(a[j]=='G'||a[j]=='H'||a[j]=='I'){
                cout<<4;
            }
            else if(a[j]=='J'||a[j]=='K'||a[j]=='L'){
                cout<<5;
            }
            else if(a[j]=='M'||a[j]=='N'||a[j]=='O'){
                cout<<6;
            }
            else if(a[j]=='P'||a[j]=='Q'||a[j]=='R'||a[j]=='S'){
                cout<<7;
            }
            else if(a[j]=='T'||a[j]=='U'||a[j]=='V'){
                cout<<8;
            }
            else if(a[j]=='W'||a[j]=='X'||a[j]=='Y'||a[j]=='Z'){
                cout<<9;
            }
        }
        cout<<endl;
    }
}
