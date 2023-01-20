#include<bits/stdc++.h>
using namespace std;

int main(){
long long int a,b;
cin>>a;
for(int i=0;i<a;i++){
    cin>>b;
    long long int c=0;
    for(int j=1;j<=sqrt(b);j++){
        if(b%j==0){
            c++;
        }
    }
    if(c>1){
        cout<<"Not Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
}

}
