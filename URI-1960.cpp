#include<bits/stdc++.h>

using namespace std;
int main(){
int n,x,y;
cin>>n;
x=n;
while(x){
if(x>=100){
       y=x/100;
        if(y==1)cout<<"C";
       if(y==2)cout<<"CC";
       if(y==3)cout<<"CCC";
       if(y==4)cout<<"CD";
       if(y==5)cout<<"D";
       if(y==6)cout<<"DC";
       if(y==7)cout<<"DCC";
       if(y==8)cout<<"DCCC";
       if(y==9)cout<<"CM";
        x=x%100;
}
else if(x>=10){
   y=x/10;
   if(y==1)cout<<"X";
   if(y==2)cout<<"XX";
   if(y==3)cout<<"XXX";
   if(y==4)cout<<"XL";
   if(y==5)cout<<"L";
   if(y==6)cout<<"LX";
   if(y==7)cout<<"LXX";
   if(y==8)cout<<"LXXX";
   if(y==9)cout<<"XC";
    x=x%10;
}
else{
        y=x/1;
    if(y==1)cout<<"I";
   if(y==2)cout<<"II";
   if(y==3)cout<<"III";
   if(y==4)cout<<"IV";
   if(y==5)cout<<"V";
   if(y==6)cout<<"VI";
   if(y==7)cout<<"VII";
   if(y==8)cout<<"VIII";
   if(y==9)cout<<"IX";
    x=x%1;
}
}
cout<<endl;
}
