#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
int k=0;
cin>>s;
for(int i=0; i<s.length(); i++){
    if(s[i]=='1'){
        k++;
    }
}
if(k%2==0){
    cout<<s+'0'<<endl;
}
else{
    cout<<s+'1'<<endl;
}
}
