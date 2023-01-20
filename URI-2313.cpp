#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;
if(a==b && b==c){
    cout<<"Valido-Equilatero"<<endl;
    if(b==sqrt(a*a+c*c)){
            cout<<"Retangulo: S"<<endl;
        }
        else{
            cout<<"Retangulo: N"<<endl;
        }
}
else if(a>b && a>c){
    if(b+c>a && b==c){
        cout<<"Valido-Isoceles"<<endl;
        if(a==sqrt(b*b+c*c)){
            cout<<"Retangulo: S"<<endl;
        }
        else{
            cout<<"Retangulo: N"<<endl;
        }
    }
    else if(b+c>a && (b>c || c>b)){
        cout<<"Valido-Escaleno"<<endl;
        if(a==sqrt(b*b+c*c)){
            cout<<"Retangulo: S"<<endl;
        }
        else{
            cout<<"Retangulo: N"<<endl;
        }
    }
    else{
    cout<<"Invalido"<<endl;
}
}
else if(b>a && b>c){
    if(a+c>b && a==c){
        cout<<"Valido-Isoceles"<<endl;
        if(b==sqrt(a*a+c*c)){
            cout<<"Retangulo: S"<<endl;
        }
        else{
            cout<<"Retangulo: N"<<endl;
        }
    }
    else if(a+c>b && (a>c || c>a)){
        cout<<"Valido-Escaleno"<<endl;
        if(b==sqrt(a*a+c*c)){
            cout<<"Retangulo: S"<<endl;
        }
        else{
            cout<<"Retangulo: N"<<endl;
        }
    }
    else{
    cout<<"Invalido"<<endl;
}
}
else if(c>a && c>b){
    if(a+b>c && a==b){
        cout<<"Valido-Isoceles"<<endl;
        if(c==sqrt(b*b+a*a)){
            cout<<"Retangulo: S"<<endl;
        }
        else{
            cout<<"Retangulo: N"<<endl;
        }
    }
    else if(a+b>c &&(a>b || b>a)){
        cout<<"Valido-Escaleno"<<endl;
        if(c==sqrt(b*b+a*a)){
            cout<<"Retangulo: S"<<endl;
        }
        else{
            cout<<"Retangulo: N"<<endl;
        }
    }
    else{
    cout<<"Invalido"<<endl;
}
}
else if((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b)){
    cout<<"Valido-Isoceles"<<endl;
        if(c==sqrt(b*b+a*a) || a==sqrt(b*b + c*c) || b==sqrt(a*a+c*c)){
            cout<<"Retangulo: S"<<endl;
        }
        else{
            cout<<"Retangulo: N"<<endl;
        }
}

}
