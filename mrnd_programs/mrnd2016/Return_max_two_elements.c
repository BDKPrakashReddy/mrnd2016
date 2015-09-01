#include<stdio.h>
void f_s(int a[],int *,int *);
void main(){
	int a[10],i,n,f,s;
	printf("enter the size:");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	f_s(a,&f,&s,n);
	printf("%d\t%d", f, s);
	getch();
}
void f_s(int a[],int *x,int *y,int n){
	int i;
	*x = a[0];
	*y = *x;
	for (i = 1; i<n; i++){
		if ((*x) < a[i]){
			*y = *x;
			*x = a[i];
			
		}
		else if ((*y) < a[i]){
			*y = a[i];
		}
	}
}