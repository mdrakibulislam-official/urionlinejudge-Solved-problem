#include<bits/stdc++.h>
using namespace std;

int main(){
int x,n,i;
while(1){
cin>>n;
if(n==0){
    break;
}
for(i=0; i<n; i++){
    cin>>x;
    if(x%2==0){
        cout<<2*x-2<<endl;
    }
    else{
    cout<<2*x-1<<endl;
}}
}
return 0;
}
