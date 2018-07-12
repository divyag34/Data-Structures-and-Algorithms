#include<conio.h>
#include<iostream.h>
void mergeSort(int list[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];

    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
	if (list[lo] <= list[mi])
	{
	    temp[i] = list[lo];
	    lo++;
	}
	else
	{
	    temp[i] = list[mi];
	    mi++;
	}
	i++;
    }
    if (lo > mid)
    {
	for (k = mi; k <= high; k++)
	{
	    temp[i] = list[k];
	    i++;
	}
    }
    else
    {
	for (k = lo; k <= mid; k++)
	{
	     temp[i] = list[k];
	     i++;
	}
    }

    for (k = low; k <= high; k++)
    {
	list[k] = temp[k];
    }
}
void partition(int list[],int low,int high)
{
    int mid;

    if(low < high)
    {
	mid = (low + high) / 2;
	partition(list, low, mid);
	partition(list, mid + 1, high);
	mergeSort(list, low, mid, high);
    }
}



int main()
{     clrscr();
    int list[50];
    int i, size;

    cout<<"Enter total number of elements:";
    cin>>size;
    cout<<"Enter the elements:\n";
    for(i = 0; i < size; i++)
    {
	cin>>list[i];
    }
    partition(list, 0, size - 1);
    cout<<"After merge sort:\n";
    for(i = 0;i < size; i++)
    {
	 cout<<list[i];
	 cout<<"\t";
    }

      getch();
   return 0;

}

