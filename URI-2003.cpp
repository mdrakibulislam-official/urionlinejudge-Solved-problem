#include<bits/stdc++.h>
using namespace std;

int main(){
int h,m;
char ch;
while(cin>>h>>ch>>m && !cin.eof()){
 if((h<=7 && m==0) || (h<7)){
    cout<<"Atraso maximo: "<<0<<endl;
 }
 else if(h<8){
    cout<<"Atraso maximo: "<<m<<endl;
 }
 else if(h==9 && m==0){
    cout<<"Atraso maximo: "<<120<<endl;
 }
 else{
    cout<<"Atraso maximo: "<<60+m<<endl;
 }
}

}
