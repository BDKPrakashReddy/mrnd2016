#include<stdio.h>
void div_11(int n);
void main(){
	int n;
	printf("enter the no.");
	scanf("%d", &n);
	div_11(n);
}
void div_11(int n){
	int a[10],i,f,esum=0,osum=0;
	for (i=0; n != 0;i++){
		a[i] = n % 10;
	}
	for (i = 0; a[i]; i++){
		if (i % 2 == 0)
			esum += a[i];		//Finding the even position sum
		else
			osum += a[i];        //odd position sum
	}
	f = esum - osum;
	if (f == 0 || f == 11)
		printf("no is divisible by 11");
	else
		div_11(f);
}