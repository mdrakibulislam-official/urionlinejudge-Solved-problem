#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,k=1;
    while(cin>>n &&!cin.eof()){
        if(n==0){
            cout<<"Caso "<<k++<<": "<<1<<" numero"<<endl;
            cout<<0<<endl<<endl;
                   }
    else{
        int m=1;
            for(int i=0;i<=n;i++){
            for(int j=0;j<i;j++){
                m++;
            }}
            cout<<"Caso "<<k++<<": "<<m<<" numeros"<<endl;
        for(int i=0;i<=n;i++){
                if(i==0){cout<<0<<" ";}
            for(int j=0;j<i;j++){
                if(i==n && j==i-1){
                      cout<<i<<endl;
                      }
                else{
                    cout<<i<<" ";
                }
            }
        }
        cout<<endl;
    }}
}
