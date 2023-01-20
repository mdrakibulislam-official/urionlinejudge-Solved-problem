#include <stdio.h>
int main()
{
   int a,b,c,d,e,N, p, max=0;
   while(scanf("%d", &N)!=EOF){
   	
    for(a=1,max=0; a<=N; a++)
    { 
    	scanf("%d",&p);
        if(max<p)
        {
            max=p;
        }
    }
    if(max<10)
    printf("1\n");
    else if(max<20)
     printf("2\n");
    else if(max>=20)
     printf("3\n");
    }
    return 0;

}
