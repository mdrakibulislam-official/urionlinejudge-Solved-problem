#include <stdio.h>
int main(){
       int a,b,c,i,x;
       scanf("%d%d",&a,&b);
       if(a>b){
       	x=a;
       	a=b;
       	b=x;}
       for(i=a+1;i<b;i++){
       if((i%5 == 2) || (i%5 == 3)){
       	printf("%d\n",i);}
       	
       		}}
