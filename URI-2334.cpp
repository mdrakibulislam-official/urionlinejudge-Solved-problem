#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned long long int a;

while(cin>>a){
    if(a==-1){
        break;
    }
    else if(a==0){
        cout<<0<<endl;
    }
    else{
        cout<<a-1<<endl;
    }
}
return 0;
}
