#include<iostream>
#include<math.h>
using namespace std;

int main(){
int a,b,q,r;
cin>>a>>b;

for(r=0;r<fabs(b);r++){
q=(a-r)/b;
if((b*q)+r==a){
    cout<<q<<" "<<r<<endl;
    break;
}
}
}
