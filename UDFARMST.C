#include<stdio.h>
#include<conio.h>
int armstrong(int);
void main()
{
	int n;
	clrscr();
	printf("enter the no to check armstrong:");
	scanf("%d",&n);
	if (armstrong(n))
	{ printf("the %d is armstrong number",n);}
	else
	printf("the number is not armstrong number");
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
return 1;
else
return 0;

}
