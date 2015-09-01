//character which repeats more than n/2 times in a string
#include<stdio.h>
#include<string.h>
char reptd_char(char a[]);
void main(){
	char a[30],ch;
	printf("enter the string:");
	gets(a);
	ch = reptd_char(a);
	printf("%c\t", ch);	
	getch();
}
char reptd_char(char a[]){
	char b;
	int i, j, count,k,n;
	n = strlen(a);
	for (i = 0; a[i]; i++){
		b = a[i];
		count = 1;
		for (j = i + 1; a[j]; j++){			
			if (a[i] == a[j])
				count++;					//if same incrementing the count
		}
		if (count >= n / 2){
			printf("%c\t", b);
			return b;
		}
	}
}