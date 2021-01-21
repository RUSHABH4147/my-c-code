#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
 if(!(i%2==0))
 {
   for (j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
}
else
{
for(j=i;j>=1;j--)
{
printf("%d ",j);
}
}
printf("\n");
}

for(j=5;j>=1;j--)
{
 printf("%d ",j);
}
printf("\n");

for(i=5;i>=1;i--)
{
if (i%2==1)
k=1;
else k =i;
for(j=1;j<=i;j++)
{
printf("%d ",k);
if(i%2==1)
k++;
else
k--;
}
printf("\n");
}
getch();

}
