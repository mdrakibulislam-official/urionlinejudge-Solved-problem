#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int a[6],f,temp=0;
    cin>>f;
    for(int i=0;i<5;i++){
        cin>>a[i];
        if(f==a[i]){
            temp++;
        }
    }
    cout<<temp<<endl;
}
