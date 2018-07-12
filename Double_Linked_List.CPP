#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct list{
int data;
struct list *next,*prev;
}*head;
void create()
{
struct list *temp;
int num;
temp=(struct list*)malloc(sizeof(struct list));
cout<<"\nenter the data to be created";
cin>>num;
temp->data=num;
temp->next=head;
head->prev=temp;
head=temp;
cout<<"\nnode created\n";
}
void display()
{
 struct list *ptr;
 ptr=head;

 while(ptr!=NULL)
 {
	 cout<<ptr->data<<"->";
	 ptr=ptr->next;

}


cout<<"end of list\n";
}
void display2()
{

 struct list *ptr,*tail,*q;
 ptr=head;

 while(ptr!=NULL)
 {        q=ptr;
	 ptr=ptr->next;

}  tail=q;
cout<<"end of list";
while(q!=NULL)
{

cout<<"->"<<q->data;
q=q->prev;

}
 cout<<"\n";
}
void insert_beg()
{
struct list *temp;
int num;
temp=(struct list*)malloc(sizeof(struct list));
cout<<"\nenter the data to be added";
cin>>num;
temp->data=num;
temp->next=head;
head->prev=temp;
head=temp;
cout<<"\nnode added\n";
}
void insert_end()
{struct list *temp,*ptr,*q;
int num;
temp=(struct list*)malloc(sizeof(struct list));
cout<<"\nenter the data to be added";
cin>>num;
ptr=head;
 while(ptr!=NULL)
 {
  q=ptr;
ptr=ptr->next;

}
temp->data=num;
temp->next=NULL;
temp->prev=q;
q->next=temp;
q=temp;
cout<<"\nnode added at end\n";
}

void insert_any()
{
int k=0,pos;
cout<<"\nenter position to add\n";
cin>>pos;
struct list *temp,*ptr,*q;
int num;
temp=(struct list*)malloc(sizeof(struct list));
cout<<"\nenter the data to be added";
cin>>num;
ptr=head;
while(ptr!=NULL&&k!=pos-1)
{
q=ptr;
ptr=ptr->next;
k++;
}
temp->data=num;
temp->next=ptr;
ptr->prev=temp;
q->next=temp;
temp->prev=q;
cout<<"node inserted at "<<pos<<"\n";

}
void delete_any()
{
int k=0,pos;
cout<<"\nenter position to delete\n";
cin>>pos;
struct list *temp,*ptr,*q,*q1,*q2;
int num;
temp=(struct list*)malloc(sizeof(struct list));
ptr=head;
while(ptr!=NULL&&k!=pos-1)
{
q=ptr;
ptr=ptr->next;
k++;
}
temp=ptr;
q->next=ptr->next;
ptr->next->prev=q;

cout<<"the node deleted is"<<temp->data<<"\n";
free(temp);
}


void delete_end()
{
struct list *temp,*ptr,*q;

temp=(struct list*)malloc(sizeof(struct list));
ptr=head;
while(ptr!=NULL)
{
q=ptr;
ptr=ptr->next;

}temp=q;

q->prev->next=NULL;
q=q->prev;
cout<<"the node deleted is "<<temp->data<<"\n";
free(temp);


}
void delete_beg()
{
struct list *temp,*ptr;
temp=(struct list*)malloc(sizeof(struct list));
temp=head;
head->next->prev=NULL;
head=head->next;
cout<<"the node deleted is"<<temp->data<<"\n";
free(temp);
}
int main()
{
clrscr();
int ch,no;
do{
cout<<"\n1.create list\n2.display list\n3.exit\n4.display_reverse\n5.insert start\n6.insert end\n7.insert any\n8.delete start\n9.delete end\n10.delete any\n";

cout<<"\nenter your choice\n";
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

break;
case 4:
display2();
break  ;
case 5:
insert_beg();
break;
case 6:
insert_end();
break;
case 7:
insert_any();

break;

case 8:
delete_beg();
break;
case 9:
 delete_end();
break;
case 10:
delete_any();
break;
 default:
exit(0);
}
cout<<"\nwant to continue 1/0" ;
cin>>no;

}while(no!=0);
return 0;
}





