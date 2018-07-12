#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
void swap(int *x, int *y)
{
int t=0;
t=*x;
*x=*y;
*y=t;
}
void inssort(int a[],int N)
{
int k,j;
for(int i=1;i<N;i++)
{
  k=a[i];
  cout<<"\n the key is "<<k;
  j=i-1;
 while(j>=0 && k<a[j])
 {
 swap(&a[j+1],&a[j]);
 j--;
 }

 }

}


int main()
{
clrscr();
int arr[80],n;
cout<<"\nenter the size of array\n";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
inssort(arr,n);
cout<<"\nsorted array is \n";
for( i=0;i<n;i++)
{
cout<<arr[i]<<"\n";
}
return 0;
}