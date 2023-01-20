#include <stdio.h>
int main(){
	int x,y,i;
	scanf("%d",&x);
    for(i=1;i<=x;i++){
    	y=i*i*i;
    printf("%d %d %d\n",i,i*i,y);
    printf("%d %d %d\n",i,i*i+1,y+1);
    	}}
