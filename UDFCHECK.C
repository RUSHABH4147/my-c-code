#include<stdio.h>
#include<conio.h>

int checkprime(int);
void main()
{
int n;
clrscr();
printf("enter the no to check is it prime no:");
scanf("%d",&n);
checkprime(n);
getch();
}
int checkprime(int n)
{
 int i,count;
 for (i=2;i<n-1;i++)
 {
  count=0;
  if(n%i==0)
  count++;
  break;
  }
  if (count==0)
  printf("%d no is prime no ",n);

  else
  printf("%d no is not prime no.",n);

}
