#include <stdio.h>
#define pi 3.14159
int main() {
    double R,b;
    scanf("%lf",&R);
    b=(4/3.0)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",b);
    return 0;
}
