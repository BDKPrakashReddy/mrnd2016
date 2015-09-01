//inserting the no. into sorted array
#include<stdio.h>
void insert(int a[30],int n,int r);
void main()
{
	int a[30],n,i,ins;
	printf("enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entre the no. to be inserted:");
	scanf("%d",&ins);
	insert(a,n,ins);
	printf("after inserting:\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",a[i]);
	}
}	
void insert(int a[30],int n,int r)
{
	int i,k;
	for(i=0;i<n;i++)
	{
		if(r<a[i])	//if inserting no. is the less than the min no. in the list
		{
			for(k=n+1;k>i;k--)
			{	
				a[k]=a[k-1];
			}
			n=n+1;
			a[i]=r;
			break;
		}
		else if(r>a[i]&&i==n-1)		//if no. greater than the max element
		{
			a[i+1]=r;
			n=n+1;		
		}
		else if(r>a[i]&&r<=a[i+1])	//if the no. is lie between 
		{
			for(k=n+1;k>i+1;k--)
			{	
				a[k]=a[k-1];
			}
			n=n+1;
			a[i+1]=r;
			break;
		}
	}
}
