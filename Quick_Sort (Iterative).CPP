#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *x, int *y)
{
int t=0;
t=*x;
*x=*y;
*y=t;
}

int Partition(int a[],int low,int high)
{
int beg=high+1;
int j=high;
int p=low;
for(;j>low;j--)
{
if(a[j]>=a[p])
{beg--;
swap(&a[beg],&a[j]);
}
}
swap(&a[beg-1],&a[p]);
return(beg-1);
}
void Quicksort( int l,int h,int a[])
{

 int stack[80], top=-1,p=0;

 stack[++top]=l;
 stack[++top]=h;

 while(top!=-1 && l<h)
 {
 h=stack[top--];
 l=stack[top--];

 p = Partition(a,l,h);


 cout<< p <<"\n";
int left=(p-1)-l;
int  right=h - (p+1);
 if(left <= righ2t)
 {
 stack[++top]=l;
 stack[++top]=p-1;
 stack[++top]=p+1;
 stack[++top]=h;
 }

if(right < left)
 {
 stack[++top]=p+1;
 stack[++top]=h;
 stack[++top]=l;
 stack[++top]=p-1;

 }

 }



  }

 int main()
{

int arr[]={90,5,23,0,6,34,7,78};
Quicksort(0,7,arr);
cout<<"Sorted array is:" <<endl;
for(int i=0;i<8;i++)
{
cout<<arr[i]<<"\t";
}
return 0;
}
