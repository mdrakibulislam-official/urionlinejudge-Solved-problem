#include <stdio.h>
int main(){
	int a,b,i,x=0,y=0,z=0;
	while(scanf("%d",&a)!=4){
		if(a==1)
		x++;
		else if(a==2)
		y++;
		else if(a==3)
		z++;
		else if(a==4)
		break;
		}
		printf("MUITO OBRIGADO\n");
		printf("Alcool: %d\n",x);
		printf("Gasolina: %d\n",y);
		printf("Diesel: %d\n",z);
		
		return 0;
		}
