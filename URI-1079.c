#include <stdio.h>
int main(){
	int x,y;
	double a,b,c,k;
	scanf("%d\n",&y);
	for(x=1;x<=y;x++){
		scanf("%lf %lf %lf\n",&a,&b,&c);
        k=(a*2+b*3+c*5)/10;
	  	printf("%.1lf\n",k);
	  	}
	  	return 0;
	  	}
