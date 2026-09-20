#include <stdio.h>

int main()
{
    double length=0;
    double width=0;
    double S=0;
    printf("Please input the length :");
    scanf("%lf",&length);

    printf("Please input the width :");
    scanf("%lf",&width);

    S=length*width;
    printf("The area is:%f",S);
    
    return 0 ;

}