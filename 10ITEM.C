#include<stdio.h>
#include<conio.h>

void main()
{
char nm[10];
int price,qty,up,i;
float net,dis;
clrscr();
 for (i=1;i<10;i++)
 {
 printf("\nenter the the name of item :");
 scanf("%s",&nm);
 printf("enter the unit price: ");
 scanf("%d",&up);
 printf("the quantity of item :");
 scanf("%d",&qty);

price=up*qty;
dis=price*.05;
net=price-dis;

printf("================BILL===================\n");
printf("the name of item is:\t %s\n",nm);
printf("quantity of item is:\t %d\n",qty);
printf("unit price of an item is:%d\n",up);
printf("the total price of item is :%d\n",price);
printf("the discount price is: %f\n",dis);
printf("\nthe net price is:%.2f\n\t\n",net);
 }
}