#include<stdio.h>
#include<conio.h>
void main ()
{
 int f=0,s=0,total,num,i;
 clrscr();
 printf("enter the first no:");
 scanf("%d",&f);
  printf("enter the second no:");
 scanf("%d",&s);
  printf("enter the end no:");
 scanf("%d",&num);

 for(i=0;i<=num;i++)
 {
      if(i<=0)
      {
	total=i;
      }
 else
    {
    total=f+s;
    f=s;
    s=total;
    }
   printf("%d ",total);
}

getch();

}