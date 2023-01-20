#include<bits/stdc++.h>
using namespace std;

int main(){

	string mode;
	int t,r,g,b,i=1,res=0;
	while(scanf("%d",&t)!=EOF){
		while(t--){

			cin>>mode>>r>>g>>b;

			if(mode=="eye"){
				res = 0.30*r + 0.59*g + 0.11*b;
			}
			else if(mode=="min"){
				res = min(r,min(g,b));
			}
			else if(mode=="mean"){
				res = (r+g+b)/3;
			}
			else{
				res = max(r,max(g,b));
			}

			printf("Caso #%d: %d\n",i++,res);
			res=0;
		}
	}

	return 0;
}
