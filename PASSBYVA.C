#include<stdio.h>
#include<conio.h>

void swap(int,int);
void main()
{
int a,b;
clrscr();
printf("enter the two numbers to be swapped ");
scanf("%d %d",&a,&b);
printf("\n the numbers before being swapped are %d %d ",a,b);
swap(a,b);
getch();
}
void swap(int x, int y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
  printf("\n the two numbers after being swapped are %d %d ",x,y);
}










