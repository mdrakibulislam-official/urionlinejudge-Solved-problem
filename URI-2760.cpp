#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b,c;
getline(cin,a);
getline(cin,b);
getline(cin,c);
cout<<a<<b<<c<<endl;
cout<<b<<c<<a<<endl;
cout<<c<<a<<b<<endl;
for(int i=0;i<a.length() && i<10;i++){
    cout<<a[i];
}
for(int i=0;i<b.length() && i<10;i++){
    cout<<b[i];
}
for(int i=0;i<c.length() && i<10;i++){
    cout<<c[i];
}
cout<<endl;
}
