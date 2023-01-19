#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
int num=0;
cin>>s;

for(int i=0; i<s.length(); i++){
    if(s[i]=='1'){
        if(s[i+1]=='3'){
            num++;
            cout<<s<<" es de Mala Suerte"<<endl;
            break;
        }
    }
}
if(num==0){
    cout<<s<<" NO es de Mala Suerte"<<endl;
}

}
