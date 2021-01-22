#include<stdio.h>
#include<conio.h>
int armstrong(int);
void main()
{
	int n;
	clrscr();
	printf("enter the no to check armstrong:");
	scanf("%d",&n);
	armstrong(n);
	getch();
}
int armstrong(int n)
{
	int dsum=0,d,no=0;
	no=n;
	while(n>0)
	{
	d=n%10;
	dsum+=(d*d*d);
	n/=10;
	}
if(dsum==no)
printf("the no is armstrong no%d=%d",dsum,no);
else
printf("no is not armstrong no");

}
