#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,x,y,k;

	while(cin>>n>>x>>y){
            int sum=0;
            for(int i=0;i<n;i++){
                cin>>k;
                if(k>=x && k<=y){
                    sum++;
                }
            }
    cout<<sum<<endl;
	}
}
