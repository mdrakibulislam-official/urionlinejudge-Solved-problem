#include<iostream>
using namespace std;

int main(){
int chicken, beef, pasta, ch, be, pa,sum=0;
cin>>chicken>>beef>>pasta;
cin>>ch>>be>>pa;
if(chicken<ch){
    sum=sum+(ch-chicken);
}
if(beef<be){
    sum=sum+(be-beef);
}
if(pasta<pa){
    sum=sum+(pa-pasta);
}
cout<<sum<<endl;

}
