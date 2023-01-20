#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,q;

	while(cin>>n){

		int sum=0;

		for (int i = 0; i < n; i++)
		{
			cin>>q;
			if(q){
              sum++;
			}
		}
		double m=(n*.666);
		if(sum>=m){
            cout<<"impeachment"<<endl;
		}
		else{
            cout<<"acusacao arquivada"<<endl;
		}}
	return 0;
}
