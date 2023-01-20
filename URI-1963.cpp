#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
double old,ne,result;
cin>>old>>ne;
result=((ne-old)/old)*100.00;
cout<<fixed<<setprecision(2)<<result<<'%'<<endl;
}
