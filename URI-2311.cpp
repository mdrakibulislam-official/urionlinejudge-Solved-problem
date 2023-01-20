#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
string s;
double x,y[7],z;
cin>>n;
for(int i=0; i<n; i++){
    cin>>s>>x;
    double max=0.0, min=0.0, count=0.0;
    for(int j=0; j<7;j++){
        cin>>y[j];
        count+=y[j];
        if(max<y[j]){
            max=y[j];
        }
    }
    min=y[0];
    for(int j=1; j<7;j++){
        if(min>y[j]){
            min=y[j];
        }
    }
    z=count-(max+min);
    cout<<s<<" "<<fixed<<setprecision(2)<<z*x<<endl;
}
}
