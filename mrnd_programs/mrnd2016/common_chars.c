//printing the common characters in the two strings without duplicates
#include<stdio.h>
void com_char(char a[], char b[]);
void main(){
	char a[20], b[20];
	printf("enter the first string:");
	gets(a);
	printf("enter the second string:");
	gets(b);
	com_char(a, b);		//passing the two strings
	getch();
}
void com_char(char a[], char b[]){
	char c[26];
	int i,k;
	for (i = 0; a[i]; i++){
		k = a[i] - 'a';		//finding the position of the firs string character wrt asci value of 'a'. 
		c[k] = 1;			//making position of character which is  in the first string as '1'
	}
	for (i = 0; b[i]; i++){
		k = b[i] - 'a';		//finding the position of the second string character wrt asci value of 'a'.
		if (c[k] == 1){		//if present 
			c[k] = 0;					//making   as 0 means once thar char is visited.	
			printf("%c\t", b[i]);		//printing that character 
		}
	}
}