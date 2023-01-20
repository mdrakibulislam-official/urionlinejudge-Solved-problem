#include<bits/stdc++.h>
using namespace std;
int main(){
int i,n,y[101],k;
double x[101],max=0.0;
cin>>n;
    for(i=0; i<n; i++){
            cin>>y[i]>>x[i];
    if(max<x[i]){
        max=x[i];
        k=y[i];
    }
    }
    if(max>=8.0){
        cout<<k<<endl;
    }
    else{
    cout<<"Minimum note not reached"<<endl;
    }
}
