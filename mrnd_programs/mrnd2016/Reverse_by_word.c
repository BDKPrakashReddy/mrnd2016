//reversing the string by words.
#include<stdio.h>
void rev_sentence(char b[],int ,int );
void rev_str(char a[]);
void main(){
	char a[30];
	printf("enter the string:");
	gets(a);
	rev_str(a);
	printf("%s", a);
	getch();
}
void rev_str(char a[]){
	int i, j,temp;
	for (j = 0; a[j]; j++)		//moving up to the end
		continue;
	for (i = 0, j = j - 1; i < j;i++, j--){		//reversing the string
		temp = a[i];			
		a[i] = a[j];
		a[j] = temp;
	}
	for (i = 0, j = 0; a[j]; j++){
		if (a[j+1] == ' '||a[j+1]=='\0'){		//getting the each sentence
			rev_sentence(a, i, j);				//reversing the sentence
			i = j + 2;
		}
	}
}
void rev_sentence(char b[], int i, int n){
	char temp;
	for (; i < n; i++, n--){
		temp = b[i];
		b[i] = b[n];
		b[n] = temp;
	}
}