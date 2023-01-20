#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b,c,d;
cin>>a>>b>>c>>d;
if(a>b && a>c && a>d){
    if(b+c>a || b+d>a || c+d>a){
        cout<<"S"<<endl;
    }
    else{
            if(b>c && b>d){
                if(c+d>b){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
            }}
            else if(c>b && c>d){
                    if(b+d>c){
                cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
            }
            }
            else{
                if(b+c>d){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
            }
    }
}


    else if(b>a && b>c && b>d){
        if(a+c>b || a+d>b || c+d>b){
                cout<<"S"<<endl;
        }
        else{
            if(a>c && a>d){
                    if(c+d>a){
            cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;}}

            else if(c>a && c>d){
                if(a+d>c){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
            }
            else{
                if(a+c>d){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
            }
    }}



    else if(c>a && c>b && c>d){
        if(a+b>c || a+d>c || b+d>c){
            cout<<"S"<<endl;
        }
        else{
            if(a>b && a>d){
                if(b+d>a){
                cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
             }
            else if(b>a && b>d){
                if(a+d>b){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
            }
            else{
                if(a+b>d){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
            }
        }
        }






    else{
        if(a+b>d || a+c>d || b+c>d){
            cout<<"S"<<endl;
        }
        else{
             if(a>b && a>c){
                if(b+c>a){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
             }
             else if(b>a && b>c){
                if(a+c>b){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
             }
             else{
                if(a+b>c){
                    cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
                }
             }
             }
    }
}
