#include <stdio.h>
int main()
{
double price=0;
int quantity=0;
double money=0;
double total=0;
double change=0;
printf("Please input the price=");
scanf("%lf",&price);
printf("Please input the quantity=");
scanf("%d",&quantity);
printf("Please input your money=");
scanf("%lf",&money);
total=price*quantity;
if(money<=0||price<=0||quantity<=0)
{printf("Invalid input!\n" );
return 1;    }
if(total>=100)
{ total=total*0.9;
printf("You get a 10%% discount!\n");}
change=money-total;
if(change<0)
{printf("Your money is not enough!\n");}
else{
    printf("Your change =:%.2f\n",change);
    printf("Thank You\n");
}
return 0; }