#include<bits/stdc++.h>
using namespace std;

int main(){
long long int year;
int n,i;
cin>>n;
for(i=0; i<n;i++){
    cin>>year;
    if(year>2014){
        cout<<year-2014<<" A.C."<<endl;
    }
    else{
        cout<<2015-year<<" D.C."<<endl;
    }
}


}
