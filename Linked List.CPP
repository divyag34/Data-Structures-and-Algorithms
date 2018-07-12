#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<alloc.h>

struct Listnode
{
int data;
struct Listnode *next;
};

int main()


 {
 clrscr();
  struct Listnode *head,*last,*p,*q,*temp;
     int n,num;

    head->data=NULL;
    head->next=NULL;
    do{
   cout<<" \n insertion  of elements  " <<endl;
   cout<<"\n1. Front";
   cout<<"\n2.  END";
   cout<<"\n3. Any position";
   cout<<"\n4. Display";
   cout<<"\n5.Delete from beginning";
   cout<<"\n6.Delete from end";
   cout<<"\n7.Delete from any side";

   cout<<"\nenter your choice";
   cin>>n;
    switch(n)
    {

    case 1:
    cout<<"enter number to be entered\n";
    cin>>num;
    temp = (struct Listnode *) malloc(sizeof(struct Listnode));

    temp->data=num;
    temp->next=head->next;
    head->next=temp;

    break;
    case 2:
     cout<<"enter number to be entered\n";
    cin>>num;
    temp = (struct Listnode *) malloc(sizeof(struct Listnode));

    p=head;
    while( p->next!=NULL)
    {
      p=p->next;
      }

	temp->data = num;
	temp->next = p->next;
	p->next= temp;



    break;


    case 3:
    int n,k=0;
     cout<<"enter number to be entered\n";
    cin>>num;
    temp = (struct Listnode *) malloc(sizeof(struct Listnode));
    cout<<"enter the position where element is placed";
    cin>>n;
    p=head;
    while(p->next!=NULL&&k!=n)
    {
     k++;
     q=p;
     p=p->next;
     }
    if(k==n);
    {
    temp->data=num;
    q->next=temp;
    temp->next=p;
  }

   break;

    case 4:
    p= head;
	while(p->next != NULL)
	{
		p = p->next;
	       cout<<p->data<<" ";
	}
	break;
	case 5:
	p=head;
	p=p->next;
	head->data=p->data;
	head->next=p->next;
	head=p;
	break;
	case 6:
	 struct Listnode *q;
	p=head;
	while(p->next!=NULL)
	{
	q=p;
	p=p->next;
       }
	q->next=NULL;

	delete p;
	break;
       case 7:
       int k1=0,n1;
       p=head;
       struct Listnode *q1,*prev;
       cout<<"enter the position of element to be deleted";
       cin>>n1;
       while(p->next!=NULL&&k1!=n1)
       {
       k1++;
       cout<<p->data<<" ";
       q1=p;
       p=p->next;
       }
	prev=p->next;
	q1->next=prev;
free(p);


       break;


    default:
    exit(0);

    }
    }while(n!=8);


return 0;
}






