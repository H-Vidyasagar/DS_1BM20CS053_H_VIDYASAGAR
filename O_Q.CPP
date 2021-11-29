#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 100

int queue[max],front=-1,rear=-1;

void enqueue()
{
int item;
if(front==rear+1 || (front==0 && rear==max-1))
printf("queue is full");
else
{
if(front==-1)
{
front++;
rear++;
}
printf("enter the number to be inserted");
scanf("%d",&item);
queue[rear]=item;
rear=(rear+1)%max;
}}

void dequeue()
{
if(front==-1)
{
printf("queue is empty\n");
}
else
{
printf(" the item deleted is %d\n",queue[front]);
if(front==rear)
{
front=-1;
rear=-1;
}
else
front=(front+1)%max;
}}
void display()
{
printf("the elements of the queue are ");
for(int i=front;i!=rear; i=(i+1)%max)
printf("%d",queue[i]);
}

void main()
{
int choice;
clrscr();
for(;;)
{
printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\nenter ur choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: enqueue();break;
case 2: dequeue();break;
case 3: display();break;
case 4: exit(0);
default:printf("invalid input");
}
}
}