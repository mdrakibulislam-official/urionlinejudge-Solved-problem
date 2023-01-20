#include<bits/stdc++.h>
using namespace std;

int cmp(int a,int b){
	return a>b;
}
int main(){

	int n,q,p[101];

	while(cin>>n>>q){

		int vet[n];

		for (int i = 0; i < n; i++)
		{
			cin>>vet[i];
		}

		sort(vet,vet+n,cmp);

		for(int i=0;i<q;i++)
		{
			cin>>p[i];
		}
		for(int i=0;i<q;i++)
		{
			cout<<vet[p[i]-1]<<endl;
		}
	}
	return 0;
}
