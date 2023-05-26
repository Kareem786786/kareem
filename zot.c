#include<stdio.h>

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;

	return;
}

int main()
{
int n=10;
int a[10]={0,1,1,0,0,2,1,0,1,1};
int i, low=0;
int mid=0;
int high=n-1;


while(mid<high)
{
	if(a[mid]==0)
	{
		swap(&a[low],&a[mid]);
		low++;
		mid++;
	}
	else if(a[mid]==1)
		mid++;
	else
	{
		swap(&a[mid],&a[high]);
		high--;
	}
		

}

for(i=0;i<n;i++)
	printf("%d",a[i]);

}
