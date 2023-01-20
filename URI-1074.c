#include <stdio.h>
int main(){
	int a,b,c,k;
	scanf("%d\n",&b);
	for(a=1;a<=b;a++){
		scanf("%d\n",&c);
        if(c ==0)
		k="NULL";
	    else if(c<0 && c%2!=0)
	  	k="ODD NEGATIVE";
	  	else if(c<0 && c%2==0)
	  	k="EVEN NEGATIVE";
	  	else if(c>0 && c%2==0)
	  	k="EVEN POSITIVE";
	  	else if(c>0 && c%2!=0)
	  	k="ODD POSITIVE";
	  	printf("%s\n",k);
	  	}
	  	return 0;
	  	}
