#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x,y,z;
while(1){
    cin>>x;
    if(x==0) break;
    cin>>y>>z;
    int k=sqrt((x*y*100)/z);
    cout<<k<<endl;
}
}
