//To print 2-tuples of array whose sum is equal to N without repetitions 
#include<stdio.h>
void print_tuples(int a[20],int N);
void sort_arr(int a[],int );
void main(){
	int a[20],i,size,N_value;
	printf("enter size of the array:");
	scanf("%d",&size);
	printf("enter data into array:");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	printf("Enter valid N_value:");
	scanf("%d",&N_value);
	print_tuples(a,size,N_value);
	getch();
}
void print_tuples(int a[],int size,int N){
	int i,j,k;
	sort_arr(a,size);					//sorting the array before checking..
	
	for(i=0;i<size;i++){
		if(a[i]==N)						//if current value equal to N printing that..
			printf("\n%d",a[i]);
		else if(a[i]<N){				//if not checking for 2 tuple which sum is equal to N.
			for(j=i+1;j<size;j++){
				if(a[i]+a[j]==N){
					printf("\n%d %d",a[i],a[j]);
				break;
				}
			}
		}
		for(k=i+1;k<size;k++){		
		if(a[i]!=a[k])					//if same elements present just incrementing..
			break;
		}
		i=k-1;
	}
	
}

void sort_arr(int a[],int size){
	int i,j,min,temp;
	for(i=0;i<size;i++){			//sorting process..
		min=i;
		for(j=i+1;j<size;j++){
			if(a[min]>a[j])
				min=j;
		}
		if(min!=i){
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		}
	}
}
