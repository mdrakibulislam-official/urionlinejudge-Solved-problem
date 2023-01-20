#include<bits/stdc++.h>
#define PI 3.14
using namespace std;
int main()
{
    double v, r, h, d, a;
    int tmp;
    while(scanf("%lf%lf", &v, &d)!=EOF)
    {
        r = d/2;
        a = PI*r*r;
        h = v/a;
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",a);
    }
    return 0;
}
