#include<stdio.h>
int len(char *a);
void main(){
 char a[100];
 int l;
 printf("enter string:") ;
 gets(a);
 puts(a);
 printf("\n%d\n",len(a));
}
int len(char *a){
 int i,l=0;
 for(i=0;*(a+i);i++){
 l++;
 }
 return l;
}