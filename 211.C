#include<stdio.h>
#include<conio.h>
void main()
{
char nm[10];
int price,qty,up;
float net,dis;
clrscr();

printf("enter the name of item:");
scanf("%s",&nm);
printf("enter the unit price of item:");
scanf("%d",&up);
printf("enter the quntity of item :");
scanf("%d",&qty);

price=up*qty;


if (price <2000)
{
dis=0;
printf("no discount");
}
else if (price<5000)
dis=price*.08;
else if (price <10000)
dis=price*.12;
else
dis=price*.20;

net=price-dis;

printf("================BILL===================\n");
printf("the name of item is:\t %s\n",nm);
printf("quantity of item is:\t %d\n",qty);
printf("unit price of an item is:%d\n",up);
printf("the total price of item is :%d\n",price);
printf("the discount price is: %f\n",dis);
printf("\nthe net price is:%.2f\n",net);
printf(" \t\t thank you for visting the store\n");
printf("******************************************");

getch();


}
