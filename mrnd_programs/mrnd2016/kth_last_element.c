#include <stdio.h>
char k_string(char a[],int k);
int main(void) {
	char a[100],ch;
	int k;
	printf("enter the string:");
	scanf("%[^\n]s",a);
	printf("enter the k value");
	scanf("%d",&k);
	ch=k_string(a,k);
	printf("\n%c",ch);
	return 0;
}
char k_string(char a[],int k)
{
    char ch;
    int i,j;
    for(i=0;i<k&&(a+i)!='\0';i++){	//going up to the k th location from starting
        continue;
    }
    printf("\n%c",a[i]);
    for(j=0;a[i]!='\0';i++,j++){	//going up to end of the string
        continue;
    }
    ch=a[j];
    return ch;
}
