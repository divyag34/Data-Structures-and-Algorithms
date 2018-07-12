#include<iostream>
using namespace std;
int max(int a ,int b)
{
	return(a>b?a:b);
}

int K[80][80];

int DKnap(int W, int wt[],int val[],int n)
{
	int i,w;
	int K[80][80];
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=W;w++)
		{
			if(i==0||w==0)
			{
				K[i][w]=0;
			}
			else if(wt[i-1]<=W)
			{
				K[i][w]=max(val[i-1]+K[i-1][W-wt[i-1]],K[i-1][w]);
			}
			else
			{
				K[i][w]=K[i-1][w];
			}
			
		}
	}
		for(i=1;i<=n;i++)
	{
	
	
	for(w=1;w<=W;w++)
	{
		cout<<K[i][w]<<"\t";
	}
	cout<<"\n";
	}

	return(K[n][W]);
}

int main()
{
	int val[]={6,10,12};
	int wt[]={1,2,3};
	int W=5;
	int n=sizeof(val)/sizeof(val[0]);
	cout<<DKnap(W,wt,val,n);
}
