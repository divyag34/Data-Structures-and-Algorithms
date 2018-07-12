#include<iostream.h>
#include<conio.h>
void swap(int *x, int *y)
{
int t=0;
t=*x;
*x=*y;
*y=t;
}
void BubbleSort(int a[],int n)
{
for(int i=0;i<n;i++)
{
int flag=0;
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
swap(&a[i],&a[j]);
flag=1;
}
}
if(flag!=1)
break;
}
}
void main()
  {
  clrscr();
  int arr[]={5,1,6,2,4,3};
  BubbleSort(arr,6);
cout<<"\nsorted array is:\n";
  for(int i=0;i<6;i++)
  {
  cout<<arr[i]<<endl;
    }
    getch();
    }