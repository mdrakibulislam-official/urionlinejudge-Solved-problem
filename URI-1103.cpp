#include<iostream>
using namespace std;
int main(){
int h1,h2,m1,m2,x,y;
while(1){
    cin>>h1>>m1>>h2>>m2;
    if(h1==0 && m1==0 && h2==0 && m2==0){
        break;
    }
    if(m1>m2){
        x=60+m2-m1;
    }
    else{
        x=m2-m1;
    }
    if(h1>h2){
            if(m1>m2){
        y=(24+h2-(h1+1))*60;
            }
            else{
                y=(24+h2-h1)*60;
            }
    }
    else if(h1==h2){
        if(m1>m2){
            y=(24+h2-(h1+1))*60;
        }
        else{
            y=(h2-h1)*60;
        }
    }

    else{
            if(m1>m2){
        y=(h2-(h1+1))*60;
    }
    else{
        y=(h2-h1)*60;
    }
    }
    cout<<x+y<<endl;
}

}
