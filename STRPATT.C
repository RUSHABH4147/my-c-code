#include<stdio.h>
#include<conio.h>

char strpatt();
void main()
{
	char nm[]="Axiom";
	int i,j;
	clrscr();
	strpatt(nm);
	getch();
}
char strpatt(char nm[])
{
	int i,j;
	for(i=0;i<=5;i++)
	{
	for(j=0;j<i;j++)
	{
	printf("%c",nm[j]);
	}
	printf("\n");
	}

}