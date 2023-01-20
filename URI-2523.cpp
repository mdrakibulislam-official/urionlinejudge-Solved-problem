#include<bits/stdc++.h>
using namespace std;
int main(){
int a,n[10001];
string s;
while(cin>>s && !cin.eof()){
cin>>a;
for(int i=0;i<a;i++){
    cin>>n[i];
}
for(int i=0;i<a;i++){
    cout<<s[n[i]-1];
}
cout<<endl;
}
}
