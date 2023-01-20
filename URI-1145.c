#include <stdio.h>
int main(){
	int a,b,c,k=0;
	scanf("%d %d",&a,&b);
	for(c=1;c<=b;c++){
		k++;
		if(k==a)
			printf("%d",c);
		else
		  printf("%d ",c);
		    if(k==a){
		    	k=0;
		      printf("\n");}
	    }
		}
