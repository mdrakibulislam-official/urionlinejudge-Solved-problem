#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
    if(a==0){
       cout<<'E'<<endl;
    }
    else if(a>0 && a<36){
        cout<<'D'<<endl;
    }
    else if(a>=36 && a<=60){
        cout<<'C'<<endl;
    }
    else if(a>=61 && a<=85){
        cout<<'B'<<endl;
    }
    else if(a>=86 && a<=100){
        cout<<'A'<<endl;
    }
return 0;
}
