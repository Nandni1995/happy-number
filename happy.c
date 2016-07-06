#include<stdio.h>
#include<conio.h>
void main()
{
int s,n,r;
clrscr();
printf("Enter the number");
scanf("%d",&n);
do
{
s=0;
while(n>0)
{
r=n%10;
n=n/10;
s=s+(r*r);
}
n=s;
}
while(!(n>=0&&n<=9));
{
if(n==1)
printf("happy number");
else
printf("Not a happy number");
}
getch();
}
