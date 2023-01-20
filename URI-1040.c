#include <stdio.h>
 
int main() {
    double a,b,c,d,e,f,x;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    f=((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf("Media: %.1lf\n",f);
    if(f>=7.0)
    printf("Aluno aprovado.\n");
    else if(f<5.0)
    printf("Aluno reprovado.\n");
    else if(5.0<6.9){
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",e);
        x=(f+e)/2;
        if(x>5.0)
        printf("Aluno aprovado.\n");
        else
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",x);
    }
    return 0;
}
