#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
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
void Quicksort(int a[],int low,int high)
{
if(low<high)
{

int pivot=Partition(a,low,high);

Quicksort(a,low,pivot-1);
Quicksort(a,pivot+1,high);
}
}

int main()
{

int arr[]={34,1,8,23,0,6};
Quicksort(arr,0,5);
cout<<"Sorted array is:" <<endl;
for(int i=0;i<6;i++)
{
cout<<arr[i]<<"\t";
}
return 0;
}













































