#include <stdio.h>
int main(){
	int c;
	double b,N[100];
	scanf("%lf",&b);
	//N[c]=b;
	for(c=0;c<100;c++){
		printf("N[%d] = %.4lf\n",c,b);
		b=b/2;
		//N[c+1]=b;
		}
		return 0;
			}
