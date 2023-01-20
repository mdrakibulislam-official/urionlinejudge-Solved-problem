#include<bits/stdc++.h>
using namespace std;
int main(){

unsigned long long int x,y;
cin>>x;
y=1+((x*(x-1))/2)+((x*(x-1)*(x-2)*(x-3))/24);
cout<<y<<endl;
}
