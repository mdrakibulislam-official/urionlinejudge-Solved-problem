#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
string s;
cin>>s;
for(int j=s.length()-1; j>=0; j--){
    cout<<s[j];
}
cout<<endl;
}
