#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
double box[12][12];
char p;
double sum=0.0;
cin>>p;
for( i=0;i<12;i++){
    for(j=0;j<12;j++){
        cin>>box[i][j];
        if(i>j && (11-i)<j){
            sum+=box[i][j];
        }
    }
}
if(p=='S'){
    cout<<fixed<<setprecision(1)<<sum<<endl;
}
else if(p=='M'){
    cout<<fixed<<setprecision(1)<<sum/30.0<<endl;
}
}
