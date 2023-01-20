#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i,count=0;
cin>>n;
int height[n];
for(i=0;i<n;i++){
    cin>>height[i];
}
if(n==2 && height[0]==height[1]){
   count++;
   }
   else{
for(i=2;i<n;i++){
    if(height[i]>=height[i-1] && height[i-1]>=height[i-2] ){
        count++;
        break;
    }
    else if(height[i]<=height[i-1] && height[i-1]<=height[i-2]){
        count++;
        break;
    }
    else{
        count=count+0;
    }
}}
if(count==0){
    cout<<1<<endl;
}
else{
    cout<<0<<endl;
}

}
