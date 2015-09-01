#include<stdio.h>
int sum(int n);
void main(){
int n,res;
printf("enter the no.");
scanf("%d",&n);
res=sum(n);
printf("the sum is %d\n",res);
}
int sum(int n){
int i,sum=0,r;
for(;n!=0;){
	r=n%10;
	n=n/10;
	sum=sum+r;
}
return sum;
}
