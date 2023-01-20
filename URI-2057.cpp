#include<bits/stdc++.h>
using namespace std;

int main(){
int x,y,z,total;
cin>>x>>y>>z;
total=x+y+z;
if(total<0){
    cout<<24+total<<endl;
}
else if(total<24){
    cout<<total<<endl;
}
else{
    cout<<total-24<<endl;
}

}
