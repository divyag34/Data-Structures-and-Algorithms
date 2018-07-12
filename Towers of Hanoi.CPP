
#include<iostream.h>

#include<stdlib.h>
#include<conio.h>

int count=0;
int TOH(int n,char A,char B,char C )
{
if(n==1)
{
cout<<"\n Move "<< n<<"from "<<A<<"to"<<B<<"\n";
count++;
}
else
{
TOH(n-1,A,C,B);

cout<<"\n Move "<< n<<"from "<<A<<"to"<<B<<"\n";
count++;
TOH(n-1,C,B,A);
}
return count;
}

void main()
{
clrscr();
int N;

cout<< "enter number of discs";
cin>>N;
int t=TOH(N ,'A','B','C');
cout<<"\nit took" << t<<"steps\n";
getch();
}
