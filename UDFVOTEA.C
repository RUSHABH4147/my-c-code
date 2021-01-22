#include<stdio.h>
#include<conio.h>
int vage(int age);
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
vage(age);
getch();
}
int vage(int age)
{

if(age<=18)
printf("the person cannot vote at this age\n");
else
printf("the person can vote ");

}