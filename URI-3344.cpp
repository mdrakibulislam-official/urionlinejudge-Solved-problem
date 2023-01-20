#include<bits/stdc++.h>
using namespace std;

int funcn(int n){
if(n==1 || n==2 || n==6 || n==10){return 3;}
else if(n==4 || n==5 || n==9){return 4;}
else if(n==3 || n==7 || n==8){return 5;}
else if(n==11 || n==12 || n==20){return 6;}
else if(n==15 || n==16){return 7;}
else if(n==13 || n==14 || n==18 || n==19){return 8;}
else if(n==17){return 9;}

}

int fun1(int n){
    int k = n/10;
    int mod =  n % (k*10);
if(mod==0){return 6;}
else{return 7+funcn(mod);}
}

int fun2(int n){
    int k = n/10;
    int mod =  n % (k*10);
        if(mod==0){return 5;}
        else{return 6+funcn(mod);}
}
int fun3(int n){
    int k = n/10;
    int mod =  n % (k*10);
if(mod==0){return 7;}
else{return 8+funcn(mod);}

}
int final(int n){
if(n<=20) return funcn(n);
else if((n>=30 && n<=39) || (n>=80 && n<=99)) return fun1(n);
else if( n>=40 && n<=69) return fun2(n);
else if(n>=70 && n <=79) return fun3(n);
else if(n==100) return 11;

}

int main(){
int number, result;
cin>>number;
result = final(number);
for(int i = 1; i<1000; i++){
    result = final(result);
}
cout<<result<<endl;
}
