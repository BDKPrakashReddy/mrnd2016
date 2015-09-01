#include<stdio.h>
#include<stdlib.h>
void rotate(int a[20],int n,int r);
void main()
{
 int a[20],i,n,r;
 printf("enter the no. of elements:");
 scanf("%d",&n);
 printf("enter data:");
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
 printf("enter no. of rotations:");
 scanf("%d",&r);
 rotate(a,n,r);
 printf("after rotating:\n");
 for(i=0;i<n;i++)
 {
	 printf("%d\t",a[i]);
 }
}

void rotate(int a[20],int n,int r)
{
 int k,m,s;
 for(m=0;m<r;m++)	//excuting the no. of rotations time 
 {
	 s=a[n-1];
  for(k=n-1;k>=0;k--)	//moving the values in the array
	  a[k]=a[k-1];
 }
 a[0]=s;
}