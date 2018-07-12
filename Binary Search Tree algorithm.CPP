#include<iostream.h>
#include<malloc.h>
#include<stdlib.h>
struct tree{
struct  tree *lc,*rc;
int data;
};
void search(struct tree **root,int n,struct tree **par,struct tree **x,int *found)
  {
     struct tree *q;

     q=*root;
     *found=0;
     *par=NULL;

       while(q!=NULL)
       {
	if(q->data==n)
	 {
	  *found=1;
	  *x=q;
	  return;
	 }
	*par=q;
     if(n< q->data)
      q=q->lc;
     else
      q=q->rc;
       }
  }


void del(struct tree **root,int n)
 {
   int found;
   struct tree *parent,*x,*xsucc;

   if(*root==NULL)
      cout<<"\nTree is empty";
   parent=x=NULL;

   search(root,n,&parent,&x,&found);

   if(found==0)
     cout<<"\nDATA TO BE DELETED NOT FOUND!!!\n";
   if(x->lc!=NULL && x->rc!=NULL)
     {

    xsucc=x->rc;

     while(xsucc->lc!=NULL)
       {
	 parent=xsucc;
	 xsucc=xsucc->lc;
       }
     x->data=xsucc->data;
     x=xsucc;
     }
     if(x->lc==NULL && x->rc==NULL)
    {
       if(parent->rc==x)
	   parent->rc=NULL;
       else
	   parent->lc=NULL;
     }
     if(x->lc==NULL && x->rc!=NULL)
     {
	if(parent->lc==x)
	   parent->lc=x->rc;
	else
	   parent->rc=x->rc;
     }
     if(x->lc!=NULL && x->rc==NULL)
      {
	 if(parent->lc==x)
	parent->lc=x->lc;
	 else
	parent->rc=x->lc;
       }
  }




void insert(struct tree **root,int n)
{
    struct tree **ptr,**par;
   *ptr= (struct tree *)malloc(sizeof(struct tree));
    (*ptr)->data=n;
   (*ptr)->lc=NULL;
  ( *ptr)->rc=NULL;

if((*root)==NULL)
{
*root=*ptr;
cout<<"node created\n";
}

else
{
*par=*root;

if(n < (*par)->data)
{
if((*par)->lc==NULL)
{
(*par)->lc=*ptr;

}
else{
insert((&(*par)->lc),n);
}
}
if(n > (*par)->data)
{
if((*par)->rc==NULL)
{
(*par)->rc=*ptr;

}
else{

insert(&((*par)->rc),n);
}
}

}
}

void post(struct tree *root)
{
if(root)
{
post(root->lc);
post(root->rc);

cout<<"\t"<<root->data;
}}
void pre(struct tree *root)
{
if(root)
{
cout << "\t"<<root->data;
pre(root->lc);
pre(root->rc);
}
}
void in(struct tree *root)
{
struct tree *par;
if(root)
{

par=root;
in(par->lc);
cout<<"\t"<<par->data;
in(par->rc);
}

}

void dft(struct tree *root)
{
in(root);
}


int main()

{


struct tree *root=NULL;
 int num;
int ch;
do{
cout<<"\t MMENU \t";
cout<<"1. insert node\n 2. pre-order traversal\n 3. post-order trasversal \n 4. in-order traversal \n6. exit\n 5.delete\n" ;
cout<<"enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nenter number";
cin>>num;
insert(&root,num);
break;
case 2:
pre(root);
break;
case 3:

post(root);
break;
case 4:
in(root);
break;
case 5:
int n;
cin>>n;
del(&root, n);
break;
default:
cout<<"wrong choice";
exit(0);
}
}while(ch!=6);
return 0;
}
