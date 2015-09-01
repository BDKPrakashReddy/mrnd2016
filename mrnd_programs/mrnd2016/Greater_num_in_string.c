//greatest of two strings
#include<stdio.h>
void greaterarr(char a[],char b[]);
void main()
{
char a[10],b[10];
printf("enter elements into 1 array:");
gets(a);
printf("enter elements into 2 array:");
gets(b);
greaterarr(a,b);

}
void greaterarr(char a[],char b[])
{
int i,f=0,j;
for(i=0;a[i]==0;i++)	//going up to the non zero part
	continue;
for(j=0;b[j]==0;j++)
	continue;
for(;;i++,j++)			//checking if the first elements are eqal if eqal loop will execute
{
if(a[i]>b[j])
{			
f=1;
break;
}
else if(a[i]<b[j])
{
f=2;
break;
}
}
for(;a[i]!='\0'&&b[j]!='\0';i++,j++)	//going up to the end of any string 
	continue;
if(a[i]!='\0'&&b[j]=='\0')				//checking conditions
    printf("a is greater");
else if(a[i]=='\0'&&b[j]!='\0')
    printf("b is greater");
else if(a[i]=='\0'&&b[j]=='\0')
{
    if(f==1)
        printf("a is greater");
    else if(f==2)
        printf("b is greater");
}
}
