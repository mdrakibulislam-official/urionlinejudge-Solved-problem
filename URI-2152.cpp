#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    double k;
int n,h,m,o;
cin>>n;
while(n--){
cin>>h>>m>>o;

if(o==1){
    if(h>9 && m>9){
            cout<<h<<":"<<m<<" - A porta abriu!"<<endl;}

    else if(h<10 && m<10){
        cout<<0<<h<<":"<<0<<m<<" - A porta abriu!"<<endl;
    }
    else if(h<10 && m>9){
        cout<<0<<h<<":"<<m<<" - A porta abriu!"<<endl;
    }
    else{
        cout<<h<<":"<<0<<m<<" - A porta abriu!"<<endl;}
}
else{
        if(h>9 && m>9){
            cout<<h<<":"<<m<<" - A porta fechou!"<<endl;
            }
    else if(h<10 && m<10){
        cout<<0<<h<<":"<<0<<m<<" - A porta fechou!"<<endl;
    }
    else if(h<10 && m>9){
        cout<<0<<h<<":"<<m<<" - A porta fechou!"<<endl;
    }
    else{
        cout<<h<<":"<<0<<m<<" - A porta fechou!"<<endl;}
    }
}
}
