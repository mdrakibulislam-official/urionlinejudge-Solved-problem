#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
char ch;
int a=0,e=0,h=0,m=0,x=0,n,i;
cin>>n;
for(i=0;i<n;i++){
    cin>>s>>ch;
    if(ch=='A'){
        a++;
    }
    else if(ch=='E'){
        e++;
    }
    else if(ch=='H'){
        h++;
    }
    else if(ch=='M'){
        m++;
    }
    else if(ch=='X'){
        x++;
    }
}
cout<<x<<" Hobbit(s)"<<endl;
cout<<h<<" Humano(s)"<<endl;
cout<<e<<" Elfo(s)"<<endl;
cout<<a<<" Anao(s)"<<endl;
cout<<m<<" Mago(s)"<<endl;
}
