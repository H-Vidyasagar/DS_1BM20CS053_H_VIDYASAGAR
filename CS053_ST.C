#include<stdio.h>
#include<process.h>
#include<conio.h>
#define STACK_SIZE 5
int top = -1;
int s[10];
int item;
void push()
{
if(top==STACK_SIZE-1)
{
printf("stack is full\n");
return;
}
top++;
s[top]=item;
}
int pop()
{
if(top==-1)return -1;
return s[top--];
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty\n");
return;
}
printf("contents of the stack\n");
for(i=top;i>=0;i--)
{
printf("%d \n",s[i]);
}
}
void main()
{
int item_deleted;
int choice;
clrscr();
for(;;)
{
printf("\n 1:push\n 2:pop\n 3:display\n 4:exit\n");
printf("enter the choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the item to be inserted\n");
scanf("%d",&item);
push();
break;
case 2:item_deleted=pop();
if(item_deleted==-1)
printf("stack is empty\n");
else
printf("item deleted is %d\n",item_deleted);
break;
case 3:display();
break;
default:exit(0);
}
}
getch();
}


