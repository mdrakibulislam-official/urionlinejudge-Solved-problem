#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,i,j;
double box[12][12];
char p;
double sum=0.0;
cin>>t>>p;
for( i=0;i<12;i++){
    for(j=0;j<12;j++){
        cin>>box[i][j];
        if(t==j){
            sum+=box[i][j];
        }
    }
}
if(p=='S'){
    cout<<fixed<<setprecision(1)<<sum<<endl;
}
else if(p=='M'){
    cout<<fixed<<setprecision(1)<<sum/12.0<<endl;
}
}
