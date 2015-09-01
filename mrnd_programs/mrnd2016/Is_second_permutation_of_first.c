-//one of the permutation of the first string is second string
#include<stdio.h>
int sec_in_f(char a[], char b[]);
void main(){
	char a[10], b[10];
	int k;
	printf("enter first string:");
	gets(a);
	printf("enter second string:");
	gets(b);
	k=sec_in_f(a, b);		//passing two strings
	if (k == 1)
		printf("true");
	else if (k == 0)
		printf("false");
	getch();
}
int sec_in_f(char a[], char b[]){
	int i, j, f;
	for (i = 0; a[i]; i++){	
		f = 0;
		for (j = 0; b[j]; j++){		//checking whether first string char present in second string or not
			if (a[i] == b[j]){
				f = 1;
				break;
			}
		}
		if (f != 1)		//if not present in second str breaking the process
			break;
	}
	if (f == 1)
		return 1;
	else
		return 0;
}