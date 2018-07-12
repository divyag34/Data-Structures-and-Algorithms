#include<iostream.h>
#include<conio.h>
struct weights{
int id;
int m;
float p;
float ppw;
};

void sort(struct weights *t,int p)
{
int i,j;
struct weights *q,s;

for(i=0;i<p;i++,t++)
{
for(j=i+1,q=t+1;j<p;j++,q++)
{
 if((t->ppw)<(q->ppw))
 {
 s=*t;
 *t=*q;
 *q=s;
 }
 }
}
}
 void knapsack(int c, struct weights *we,int n)
{
int reqar[20];
float totalp =0.0;
for(int j=0;j<20;j++)
{
reqar[j]=0;
}

for(int i=0;c!=0&&i<n;i++,we++)
{
if(we->m==c)
{
reqar[i]=we->id;
totalp=we->p;
c = c - we->m;
}
else if(we->m < c)
{
reqar[i] = we->id;
totalp+= we->p;
cout<<totalp<<endl;

c = c - we->m;
cout<<c<<endl;
}
else
{
reqar[i]= we->id;
totalp+=we->ppw*c;
cout<<we->ppw*c;
cout<<totalp<<endl;
cout<<c<<endl;
c=0;

}
}
cout<<"Required elements:[";
for(i=0; i<n;i++)
{
if(reqar[i]!=0)
{

cout<<reqar[i]<<",";
}
}
cout<<"]"<<endl;
cout<<"\nTotal profit"<<totalp<<endl;

}






void main()
{
clrscr();
struct weights w[4];
int sackcap;
cout<<"Enter the capacity of sack";
cin>>sackcap;

for( int i=0;i<4;i++)
{
cout<<"Mass";
cin>>w[i].m;
cout<<"Profit";
cin>>w[i].p;
}
for( i=0;i<4;i++)
{
w[i].id=i+1;
w[i].ppw=(float)w[i].p/w[i].m ;
}
sort(w,4);
for( i=0;i<4;i++)
{
cout<<w[i].id<<"\t"<<w[i].m<<"\t"<<w[i].p<<"\t"<<w[i].ppw<<endl;
}

knapsack(sackcap,w,4);
getch();

}

