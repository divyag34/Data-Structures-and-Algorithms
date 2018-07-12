#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct clist{
int data;
struct clist *next;
}*last;
void create()
{
struct clist *temp;
int num;

temp=(struct clist*)malloc(sizeof(struct clist));
cout<<"\nenter the data to be created";
cin>>num;

temp->data=num;
temp->next=last;
last->next=temp;
last=temp;
}

void display()
{
struct clist *temp,*ptr;
int num;
cout<<"\nenter the data to be created";
cin>>num;
ptr=last->next;
do
{
cout<<ptr->data<<"->";
ptr=ptr->next;
}while(ptr!=head);
cout<<"\n";
}
int main()
{
clrscr();
int ch,no;
do{
cout<<"\n1.create\n2.display\n3.exit\n";
cout<<"enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
exit(0);
default:
exit(0);
}
cout<<"want to continue 1/0\n ";
cin>>no;
}while(no!=0);
return 0;
}


