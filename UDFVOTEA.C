#include<stdio.h>
#include<conio.h>
int vage(int n);
void main ()
{
int age;
char nm[10];
clrscr();
printf("enter the name of person:");
scanf("%s",&nm);
printf("enter the age of person:");
scanf("%d",&age);
printf("The name of person is :%s\n",nm);
if(vage(age))
printf("the person is not vote" );
else
printf("the person age:%d can vote!!",age);
getch();
}
int vage(int n)
{

if(n<=18)
return 1;
else
return 0;

}