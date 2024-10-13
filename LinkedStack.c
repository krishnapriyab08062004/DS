#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *ref;
};
typedef struct node NODE;
NODE *top=NULL,*nnode,*temp;
int c=0,item;
void push()
{
nnode=(NODE*)malloc(sizeof(NODE));
printf("Enter Data:");
scanf("%d",&item);
nnode->info=item;
nnode->ref=NULL;
if(top==NULL)
{
top=nnode;
}
else
{
nnode->ref=top;
top=nnode;
}
c++;
}

void pop()
{
if(top==NULL)
printf("Empty Stack");
else
{
printf("popped element is %d",top->info);
top=top->ref;
}
c--;
}

void display()
{
temp=top;
if(temp==NULL)
printf("Empty Stack");
else
{
while(temp!=NULL)
{
printf("%d->",temp->info);
temp=temp->ref;
}
printf("NULL\n");
printf("COUNT:%d",c);
}
}

void main()
{
int ch;
clrscr();
printf("\n1.)Push\n2.)Pop\n3.)Display\n4.)Exit\n");
do
{
printf("\tEnter Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:printf("Exit");
       break;
}
}while(ch!=4);
getch();       
}
