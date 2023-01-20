#include<bits/stdc++.h>
using namespace std;

int main(){

int b,d;
cin>>b>>d;
if(d-b>=3){
   cout<<"Muito bem! Apresenta antes do Natal!"<<endl;
}
else if(d-b<3 && d-b>0){
    cout<<"Parece o trabalho do meu filho!"<<endl;
}
else{
    cout<<"Eu odeio a professora!"<<endl;
}
if(d==22){
    cout<<"TCC Apresentado!"<<endl;
}
else if(d>22){
    cout<<"Fail! Entao eh nataaaaal!"<<endl;
}

}
