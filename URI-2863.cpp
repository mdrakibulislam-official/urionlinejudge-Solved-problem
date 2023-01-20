#include<bits/stdc++.h>
using namespace std;
int main(){
int i,n;
double x[100];
while(cin>>n && !cin.eof()){
    for(i=0; i<n; i++){
        cin>>x[i];
    }
    double min=x[0];
    for(i=1;i<n;i++){
        if(x[i]<min){
            min=x[i];
        }
    }
    cout<<min<<endl;
}
}
