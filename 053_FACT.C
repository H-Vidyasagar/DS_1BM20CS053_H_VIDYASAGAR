#include<stdio.h>
#include<conio.h>
int fact(int n)
{
if (n==1)
return 1;
return (n*fact(n-1));
}
void main()
{
int n,res;
clrscr();
printf("enter an integer");
scanf("%d",&n);
res=fact(n);
printf("\nthe factorial of %d is %d",n,res);
getch();
}