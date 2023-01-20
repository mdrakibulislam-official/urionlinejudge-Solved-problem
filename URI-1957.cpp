#include<iostream>
#include<math.h>
using namespace std;

int main(){
long int decnum,rem,quot;
char hex[100];
int i=1,j,temp;
cin>>decnum;
quot=decnum;
while(quot!=0){
    temp=quot%16;
    if(temp<10){
        temp+=48;
    }
    else{
        temp+=55;
    }
    hex[i++]=temp;
    quot=quot/16;
}
for(j=i-1;j>0;j--){
    cout<<hex[j];
}
cout<<endl;
}
