#include<bits/stdc++.h>
using namespace std;

int main(){
double number,count=0.0,sum=0.0,avg,k=0;
while(1){
    cin>>number;
    if(number<0 || number>10.0){
       cout<<"nota invalida"<<endl;
       }
    else{
       sum+=number;
       count++;
    }
    if(count==2.0){
        avg=sum/2;
        cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
    }
    else if(number ==1){
        sum=0;
        count=0;
    }

    if(number==1){
            k++;
        sum=0;
        count=0;
    }
    if(k>0 && number==2){
        break;
    }
    else if(count>2){
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
    }

}

}
