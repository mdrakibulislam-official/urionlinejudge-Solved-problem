#include<bits/stdc++.h>
using namespace std;

int main(){
string a,b;
int n,i;
cin>>n;
for(i=0; i<n; i++){
cin>>a>>b;
if(a==b){
cout<<"Caso #"<<i+1<<": De novo!"<<endl;}
else if(a=="tesoura" && b=="papel"){
        cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;}
else if(a=="papel" && b=="pedra"){
cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else if(a=="pedra" && b=="lagarto"){
    cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else if(a=="lagarto" && b=="Spock"){
    cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else if(a=="Spock" && b=="tesoura"){
    cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else if(a=="tesoura" && b=="lagarto"){
    cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else if(a=="lagarto" && b=="papel"){
    cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else if(a=="papel"&& b=="Spock"){
    cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else if(a=="Spock" && b=="pedra"){
    cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else if(a=="pedra" && b=="tesoura"){
    cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
}
else{
    cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
}

}

}
