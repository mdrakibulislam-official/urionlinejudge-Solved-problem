#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int a[1001],f,l2=0,l3=0,l4=0,l5=0;
    cin>>f;
    for(int i=0;i<f;i++){
        cin>>a[i];
        if(a[i]%2==0){
            l2++;
        }
        if(a[i]%3==0){
            l3++;
        }
        if(a[i]%4==0){
            l4++;
        }
        if(a[i]%5==0){
            l5++;
        }
    }
    cout<<l2<<" Multiplo(s) de "<<2<<endl;
    cout<<l3<<" Multiplo(s) de "<<3<<endl;
    cout<<l4<<" Multiplo(s) de "<<4<<endl;
    cout<<l5<<" Multiplo(s) de "<<5<<endl;
}
