#include<bits/stdc++.h>
using namespace std;

int main(){
int x,y[100000],z=0;
cin>>x;
for(int i=0; i<x; i++){
    cin>>y[i];
    if(z<y[i]){
        z=y[i];
    }
}
if(z==y[0]){
    cout<<"S"<<endl;
}
else{
    cout<<"N"<<endl;
}
}
