//To find nth fibonocii  Number   
#include<stdio.h>
float nth_fib(int n);
int main(){
	int n_val;
	float n_fib;
	printf("enter the n value:");
	scanf("%d",&n_val);
	n_fib=nth_fib(n_val);
	printf("%f",n_fib);
	getch();
	return 0;
}
float nth_fib(int n){
	float index,f,s,t;
	f=0;
	s=1;
	if(n==1)
		return f;
	else if(n==2)
		return s;
	else{
		for(index=2;index<n;index++){
			t=f+s;
			f=s;
			s=t;
		}
		return t;
	}
	
}