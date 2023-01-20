#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x[101],i;
cin>>n;
for(i=0;i<n;i++){
    cin>>x[i];}
    int fall=0,k=0;
for(i=0;i<n;i++){
    if(fall<=x[i]){
        fall=x[i];
        k++;
    }
    else{
        cout<<i+1<<endl;
        break;
    }
}
if(k==n){
    cout<<0<<endl;
}
}
