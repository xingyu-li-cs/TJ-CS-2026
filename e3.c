#include <stdio.h>
int main()
{

    double a=0;
    double b=0;
    double average=0;
    printf("Please input the a=:");
    scanf("%lf",&a);
    printf("Please input the b=:");
    scanf("%lf",&b);
    average=(a+b)/2;
    printf("The average=%lf",average);
    return 0;
}