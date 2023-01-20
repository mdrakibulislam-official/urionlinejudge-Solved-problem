#include <stdio.h>
int main(){
	float a;
	double growth;
	scanf("%f",&a);
	if(a<=400.00){
	growth=15.00;
		}
	else if(a>=400.01 && a<=800.00){

    growth=12.00;}
	else if(a>=800.01 && a<=1200.00){
	
	growth=10.00;}
	else if(a>=1200.01 && a<=2000.00){
	growth=7.00;}
	else if(a>2000){

	growth=4.00;}
	printf("Novo salario: %.2f\n",a+a*(growth/100));
	printf("Reajuste ganho: %.2f\n",a*(growth/100));
	printf("Em percentual: %.lf %%\n",growth);
	
}
