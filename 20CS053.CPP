#include<stdio.h>
#include<conio.h>
struct stud
{
int id;
int age;
int marks;
};
void accept(struct stud *s1)
{
printf("enter the id->");
scanf("%d",&s1->id);
printf("enter the age->");
scanf("%d",&s1->age);
printf("enter the marks->");
scanf("%d",&s1->marks);
}
void display(struct stud *s1)
{
printf("student details are\n");
printf("id is %d\n",s1->id);

printf("age is %d\n",s1->age);
printf("marks is %d\n",s1->marks);
}
int main()
{
struct stud s[100];
int no_of_stud,i;
clrscr();
printf("please enter the number of students-> ");
scanf("%d", &no_of_stud);

for(i=0;i<no_of_stud;i++)
accept(&s[i]);

for(i=0;i<no_of_stud;i++)
display(&s[i]);
getch();
return 0;
}



