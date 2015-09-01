//program to fix the changed positions
#include <stdio.h>
void fix(int a[20],int n);
int main(void) {
	int a[20],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	fix(a,n);
	for(i=0;i<n;i++){
	    printf("%d\t",a[i]);
	}
	return 0;
}
void fix(int a[20],int n){
    int i,j,temp,m;
    for(i=0;i<n;i++){	//finding the first misplaced element
        if(a[i]>a[i+1])
            break;
    }
    m=i+1;
    for(j=i+2;j<n;j++){	//finding the second misplaced element
        if(a[j]<=a[m])
            break;
    }
    if(j!=n){			//if the elements are not adjacent
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    else{				//if the elements are adjacent
        temp=a[i];
        a[i]=a[m];
        a[m]=temp;
    }
}