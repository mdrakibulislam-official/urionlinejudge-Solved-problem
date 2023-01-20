#include<bits/stdc++.h>

using namespace std;
int main(){
int renge,x;
cin>>renge>>x;
int N[x],i,j=0;
for(i=0;i<x;i++){
    cin>>N[i];
}
if(x==2 && fabs(N[0]-N[1])<=renge){
    j=j+0;
}
else{
    for(i=1;i<x;i++){
        if(fabs(N[i]-N[i-1])<=renge){
            j+=0;
        }
        else if(fabs(N[i]-N[i-1])>renge){
            j++;
            break;
        }
else{
    j++;
    break;}
}
    }
if(j==0){
        cout<<"YOU WIN"<<endl;
    }
else{
        cout<<"GAME OVER"<<endl;
    }
    return 0;
}
