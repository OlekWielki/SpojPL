#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    string n;
    cin>>a;
        for(int i=0;i<a;i++){
            cin>>n;
            int dl=n.length();
            for(int j=0;j<dl/2;j++)
                cout<<n[j];
                cout<<endl;
        }
}
