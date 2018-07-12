
#include<iostream.h>
#include<conio.h>
#include<math.h>
int left(int i,int n)

{  int l=2*i+1;
if(l<n-1 )
{
 return (l);
 }
 else {
 return (-1);
}   }
int right(int i,int n)
{
int r =2*i+2;
if(r<n-1) {
return(r); }
else
{
return(-1);
}
 }
void heapify(int arr[], int i, int n)
{
    int largest = i;
     int l = 2*i + 1;
    int r = 2*i + 2;


    if (l < n && arr[l] > arr[largest])
	largest = l;


    if (r < n && arr[r] > arr[largest])
	largest = r;


    if (largest != i)
    {  int temp;
	temp=arr[i];
	arr[i]= arr[largest];
	arr[largest]=temp;


	heapify(arr, largest, n);
    }
}

void buildheap(int a[], int n)
{
 int t=n-1;
int i=floor(t/2);
for(;i>=0;i--)
{
heapify(a,i,n);
}
for(i=0;i<n;i++)
{
cout<<a[i]<<"\n ";
}
}
void heapsort(int a[],int n )
{
 buildheap(a,n);
int temp;
 for(int i=n-1;i>0;i--)
 {
 temp=a[i];
  a[i]=a[0];
 a[0]=temp;
 heapify(a,0 ,i);
 }

 }
void main()
{
clrscr();
int i,n,a[80];
  cout<<"Enter the number of element you want to Sort : ";
   cin>>n;


    cout<<"Enter Elements in the list :" ;
    for(i = 0; i < n; i++)
    {
	cin>>a[i];

    }
    heapsort(a,n);


    for(i = 0; i < n; i++)
    {
	cout<<"a["<<i<<"]="<<a[i]<<"\n";


    }
    }