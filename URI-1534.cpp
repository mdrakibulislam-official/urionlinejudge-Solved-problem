#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int n;
while(!(cin>>n).eof()){

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
         if(j==n-i-1){
            cout<<2;}
        else if(i==j){
            cout<<1;
        }

        else
        cout<<3;
    }
    cout<<endl;
}
}
}
