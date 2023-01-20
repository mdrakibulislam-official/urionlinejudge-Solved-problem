#include <stdio.h>
int main(){
	int x,y,a,n=0;
	while(1){
		scanf("%d %d\n",&x,&y);
		if(x<=0 ||y<=0)
		break;
		else{
		n=0;
		if(x<y){
			for(a=x;a<=y;a++){
			printf("%d ",a);
			n=n+a;}
			printf("Sum=%d\n",n);
			}
         else if(x>y){
	   for(a=y;a<=x;a++){
	   	printf("%d ",a);
			 n=n+a;
	   	}
	  printf("Sum=%d\n",n);}}
	  } 
}
