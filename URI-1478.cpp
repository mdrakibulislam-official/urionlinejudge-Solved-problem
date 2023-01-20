#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[100][100];
int i,j,x,k;
while(1){
cin>>x;
if(x==0){
    break;
}
for(i=0;i<x;i++){
    for(j=0;j<x;j++){

        if(i<j){
                if(j==x-1){
                    cout<<setw(3)<<right<<j+1-i;
                }
                else{
        cout<<setw(3)<<right<<j+1-i<<" ";}
       }
        else if(i==j){
            k=1;
            if(j==x-1){
                    cout<<setw(3)<<right<<k;
                }
                else{
            cout<<setw(3)<<right<<k<<" ";}
        }
       else{
            if(j==x-1){
                    cout<<setw(3)<<right<<i+1-j;
                }
                else{
        cout<<setw(3)<<right<<i+1-j<<" ";}
       }
    }
    cout<<endl;
}
cout<<endl;
}
}
