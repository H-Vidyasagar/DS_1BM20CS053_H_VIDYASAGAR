#include<stdio.h>
#include<conio.h>
#include<ctype.h>
char stack[50];
int top=-1;
void push(char item)
{
if (top==49)
printf("stack is full");
else
stack[++top]=item;
}
int pop()
{
if(top==-1)
{
printf("stack is empty");
return 0;
}
else
return stack[top--];
}
int pr(char symbol)
{
switch(symbol)
{
case '^':return 3;
case '*':return 2;
case '/':return 2;
case '+':return 1;
case '-':return 1;
default:return 0;
}
}
void main()
{
char infix[50],postfix[50],ch,item;
int i=0,k=0;
clrscr();
printf("enter infix expression : ");
scanf("%s",infix);
push('#');
while((ch=infix[i++])!='\0')
{
if(ch=='(')
push(ch);
else if (isalnum(ch))
postfix[k++]=ch;
else if(ch==')')
{
while(stack[top]!='(')
postfix[k++]=pop();
item=pop();
}
else
{
while(pr(stack[top])>=pr(ch))
postfix[k++]=pop();
push(ch);
}
}
while(stack[top]!='#')
postfix[k++]=pop();
postfix[k]='\0';
printf("\n postfix expression = %s",postfix);
getch();
}