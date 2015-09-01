//adding the second string at the middle of the first string
#include<stdio.h>
#include<string.h>
void inserting_str(char a[], char b[]);
void main(){
	char a[30], b[30];
	printf("enter first string:");
	gets(a);
	printf("enter second string:");
	gets(b);
	inserting_str(a, b);		//passing the two strings 
	printf("\n%s", a);	//after modification.
	getch();
}
void inserting_str(char a[], char b[]){
	int i,j,k,len_a,len_b;
	for (len_a = 0; a[len_a]!='\0'; len_a++)	//length of first string
		continue;
	for (len_b = 0; b[len_b]!='\0'; len_b++)	//length of second string
		continue;
	for (j=len_a,i=0; i < j; i++, j--)			//moving up to the middle of the first string with 'i'
		continue;
	if (i == j){								//if it is middle
		for (j=len_a-1; i <= j; j--){			//swapinrtg the data
			a[j + len_b] = a[j];
		}
		for (k = 0; k < len_b;i++, k++){		//adding the second string
			a[i] = b[k];
		}
	}
	len_a += len_b;
	a[len_a ] = '\0';					//making last position as null.
}