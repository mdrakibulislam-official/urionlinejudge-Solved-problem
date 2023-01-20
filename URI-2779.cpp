#include<bits/stdc++.h>
using namespace std;

int main(){
int x[101],item,n,i,j=0,k;
cin>>k;
cin>>n;
for(i=0;i<k;i++){
    x[i]=0;
}
for(i=0; i<n; i++){
    cin>>item;
        x[item-1]++;

}
for(i=0; i<k; i++){
    if(x[i]==0){
        j++;
    }}
    cout<<j<<endl;


}
