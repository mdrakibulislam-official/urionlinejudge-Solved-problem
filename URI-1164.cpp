#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,j;
  int x;
    cin>>n;

    for(i=0;i<n;i++)
    {
    	cin>>x;
    	int z=0;
    for(j=1;j<x;j++)
    {
    	if(x%j==0){
    	z=z+j;}}
    
        if(z==x)
        {
        	cout<<x<<' '<<"eh perfeito"<<endl;
        }
        else{
        	cout<<x<<' '<<"nao eh perfeito"<<endl;
         }  
        }
    return 0;
}
