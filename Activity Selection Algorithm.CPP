#include<iostream.h>
#include<conio.h>

void Activityselect(int s[], int f[], int n)
{
    int i, j;

 cout<<"Following activities can be selected\n";


    i = 0;
    cout << i;


    for (j = 1; j < n; j++)
    {

      if (s[j] >= f[i])
      {
	  cout<< j<<"\t";
	  i = j;
      }
    }
}
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
    int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {9, 9, 2, 4, 6, 7};
    int n = sizeof(s)/sizeof(s[0]);
inssort(f,n);
  Activityselect(s, f, n);
    return 0;
}