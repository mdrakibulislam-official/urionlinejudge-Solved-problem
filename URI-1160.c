#include <stdio.h>
int main(){
	int i,a,b,e,z,popu,po,k;
    double c,d,x,y;
    scanf("%d",&z);
	for(e=1;e<=z;e++){
		k=0;
		scanf("%d%d%lf%lf",&a,&b,&c,&d);
		popu=a;
		po=b;
		for(i=1;i<=101;i++){
		popu=popu*((c/100)+1.0);
			
		po=po*((d/100)+1.0);

			k++;
			if(popu>po)
			break;
		}
		if(k<=100)
		printf("%d anos.\n",k);
		else
		printf("Mais de 1 seculo.\n",k);
		}
		return 0;
		}
