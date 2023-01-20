#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,c;
double result;
while(cin>>x){
        double count=0,sum=0;
    for(int i=0;i<x;i++){
        cin>>n>>c;
        count+=(n*c);
        sum+=c;
    }
    result=count/(sum*100);
    cout<<fixed<<setprecision(4)<<result<<endl;
}

}
