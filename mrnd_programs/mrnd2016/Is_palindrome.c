#include<stdio.h>
void pal(char a[]);
void main(){
	char a[100];
	printf("enter the string:");
	gets(a);
	pal(a);
	getch();
	

}
void pal(char a[]){
	int i, j,f=1;
	for (i = 0; a[i] != '\0'; i++)
		continue;
	i = i - 1;
	for (j = 0; i != j; j++, i--){
		if (a[i] != a[j]){
			f = 0;
			break;
		}	
	}
	if (f == 0)
		printf("\nnot a palindrom");
	else
		printf("\npalindrom");
}