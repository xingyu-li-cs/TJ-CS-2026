#include <stdio.h>
int main ()
{
    double C=0;
    double F=0;

    printf("Please input C:");
    scanf("%lf",&C);
   
    F=C*9/5+32;
    printf("F=%lf\n",F);
    return 0;

}