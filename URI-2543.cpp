#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,q,k,l;

	while(cin>>n>>q){

		int sum=0;

		for (int i = 0; i < n; i++)
		{
			cin>>k>>l;
			if(l==0 && k==q){
              sum++;
			}
		}

            cout<<sum<<endl;
		}
	return 0;
}
