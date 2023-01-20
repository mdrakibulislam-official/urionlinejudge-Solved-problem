#include<iostream>
using namespace std;

int main(){
int count=0,x,y,z,inter=0,gremio=0,em=0;
while(1){
    cin>>x>>y;
    cin>>z;
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    if(x>y){
        inter++;
    }
    else if(x==y){
        em++;
    }
    else{
        gremio++;
    }
    if(z==2){
        break;
    }

}
cout<<inter+gremio+em<<" grenais"<<endl;
cout<<"Inter:"<<inter<<endl;
cout<<"Gremio:"<<gremio<<endl;
cout<<"Empates:"<<em<<endl;
cout<<"Inter venceu mais"<<endl;

}
