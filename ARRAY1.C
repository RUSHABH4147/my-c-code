#include<stdio.h>
#include<conio.h>
int sum(int A[]);
int grtsml(int A[]);
int sml(int A[]);
int ocr(int A[]);

void main()
{
int A[]={2,3,3,4,5,5,56,6,89};
int i;
clrscr();
for(i=0;i<9;i++){
printf("%d\t\n",A[i]);}
printf("total of array %d\n",sum(A));
printf("greatest no are %d\n ",grtsml(A));
printf("samllest no are %d\n ",sml(A));
ocr(A);
getch();
}
int sum(int A[])
{
int i,sum=0;
//n=sizeof(A)/2;
for(i=0;i<9;i++)
{
sum+=A[i];

}
return sum ;
}
int grtsml(int A[])
{
int i;
int mx=0;
//n=sizeof(A)/2;
for(i=0;i<9;i++)
{
if(A[i]>mx)
mx=A[i];
}
return mx;
}

int sml(int A[])
{
int i;
int mn=999;
//n=sizeof(A)/2;
for(i=0;i<9;i++)
{
if(A[i]<mn)
mn=A[i];
}
return mn;
}

int ocr(int A[])
{
int i,count=0;
for(i=0;i<9;i++)
{
if(A[i]==5)
count++;
}
printf("occurrernce of 5 is %d times",count);
}