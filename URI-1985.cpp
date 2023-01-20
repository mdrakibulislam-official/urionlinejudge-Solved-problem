#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,z;
double res,k[]={1.50,2.50,3.50,4.50,5.50};
cin>>x;
while(x--){
    cin>>y>>z;
    res+=k[y-1001]*z;
}
cout<<fixed<<setprecision(2)<<res<<endl;

}
