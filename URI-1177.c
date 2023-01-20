#include <stdio.h>
int main(){
	int N[1000],b,c,d;
	scanf("%d",&b);
	for(c=0,d=0;c<1000;c++){
		printf("N[%d] = %d\n",c,d);
		d++;
		if(d==b)
		d=0;
		}
		return 0;
			}
