#include <iostream>
#include <string>
using namespace std;
int main(){
    int sum=0;
    string a;
    cin>>a;
    int dl=a.size();
    for(int i=0;i<dl;i++){
        if(a[i]=='a'){
            sum+=1;
        }
        else if(a[i]=='b'){
            sum+=2;
        }
        else if(a[i]=='c'){
            sum+=3;
        }
        else if(a[i]=='d'){
            sum+=4;
        }
        else if(a[i]=='e'){
            sum+=5;
        }
        else if(a[i]=='f'){
            sum+=6;
        }
        else if(a[i]=='g'){
            sum+=7;
        }
        else if(a[i]=='h'){
            sum+=8;
        }
        else if(a[i]=='i'){
            sum+=9;
        }
        else if(a[i]=='k'){
            sum+=10;
        }
        else if(a[i]=='l'){
            sum+=20;
        }
        else if(a[i]=='m'){
            sum+=30;
        }
        else if(a[i]=='n'){
            sum+=40;
        }
        else if(a[i]=='o'){
            sum+=50;
        }
        else if(a[i]=='p'){
            sum+=60;
        }
        else if(a[i]=='q'){
            sum+=70;
        }
        else if(a[i]=='r'){
            sum+=80;
        }
        else if(a[i]=='s'){
            sum+=90;
        }
        else if(a[i]=='t'){
            sum+=100;
        }
        else if(a[i]=='v'){
            sum+=200;
        }
        else if(a[i]=='x'){
            sum+=300;
        }
        else if(a[i]=='y'){
            sum+=400;
        }
        else if(a[i]=='z'){
            sum+=500;
        }
    }
    cout<<sum;
}
