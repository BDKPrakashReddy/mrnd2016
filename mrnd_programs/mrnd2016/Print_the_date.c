#include<stdio.h>
void valid_check(char a[]);
void Number_print(int );
void Month_print(int );
void main(){
	char a[20];
	printf("enter the string:");
	scanf("%s",a);		//reading valid data of format....dd-mm-yyyy.
	valid_check(a);		//checking whether given data valid or not.
	getch();
}
void valid_check(char a[]){
	int dt,mn,yr,index,f=0,lp_yr,n;
	dt=mn=yr=0;
	for(index=0;a[index]!='-';index++){			//getting the date from the string.
		n=a[index]-'0';
		dt=dt*10+n;
	}
	for(index+=1;a[index]!='-';index++){		//getting month from the string
		n=a[index]-'0';
		mn=mn*10+n;
	}
	for(index+=1;a[index]!='\0';index++){		//getting year from the string
		n=a[index]-'0';
		yr=yr*10+n;
	}
	lp_yr=((yr%4==0)&&(yr%100!=0))||(yr%400==0); //checking whether the year is leap or not.
	if((mn>0&&mn<13)&&(dt>0)){							/*if month is valid*/
		if(mn<=7){								/*special conditions for various month values and corresponding date values validations*/
			if(mn%2!=0){
				if(dt<=31)
					f=1;
			}else if(mn!=2){					//if the month is not february
				if(dt<=30)
					f=1;
			}else if(mn==2){					//if month is february...
				if(lp_yr){	                	/*if the year is leap year*/
					if(dt<=29)
						f=1;
				}else{
					if(dt<=28)
						f=1;
				}
			}
		}else if(mn>7){
			if(mn%2==0){
				if(dt<=31)
					f=1;
			}else{
				if(dt<=30)
					f=1;
			}
		}
	}
	if(f==1){						//it means that our string is valid string
		printf("valid\n");
		Number_print(dt);			//number printing purpose.,ie.date
		printf("-"); 
		Month_print(mn);			//Month printing purpose
		printf("-");
		Number_print(yr);			//number printing purpose.,ie.year
	}
	else
		printf("not valid");		//if data not appropriate in the form of date
}
void Month_print(int mnt){
	switch(mnt){					//month
	case 1:printf("January");
		break;
	case 2:printf("February");
		break;
	case 3:printf("March");
		break;
	case 4:printf("April");
		break;
	case 5:printf("May");
		break;
	case 6:printf("June");
		break;
	case 7:printf("July");
		break;
	case 8:printf("August");
		break;
	case 9:printf("September");
		break;
	case 10:printf("October");
		break;
	case 11:printf("November");
		break;
	case 12:printf("December");
		break;
	}
}
void Number_print(int num){							//number equivalent to english names printing
	int res,no_of_digits,div,digit;
	res=num;
	for(no_of_digits=0;res!=0;no_of_digits++){		//finding the no.of digits in the no.
		res=res/10;
	}
	res=num;
	
	for(;no_of_digits;no_of_digits--){
		div=pow(10,no_of_digits-1);
		digit=res/div;								//getting each digit

		if((res>19||res<10)&&no_of_digits!=2){		//matching conditions for the digit and no. comparision
			switch(digit){
			case 1:printf("One");
				break;
			case 2:printf("Two");
				break;
			case 3:printf("Three");
				break;
			case 4:printf("Four");
				break;
			case 5:printf("Five");
				break;
			case 6:printf("Six");
				break;
			case 7:printf("Seven");
				break;
			case 8:printf("Eight");
				break;
			case 9:printf("Nine");
				break;
			}
		}else if(res<19&&res>=10){
			switch(res){
			case 10:printf("ten");
				break;
			case 11:printf("Eleven");
				break;
			case 12:printf("Twelve");
				break;
			case 13:printf("Thirteen");
				break;
			case 14:printf("Fourteen");
				break;
			case 15:printf("Fifteen");
				break;
			case 16:printf("Sixteen");
				break;
			case 17:printf("Seventeen");
				break;
			case 18:printf("Eighteen");
				break;
			case 19:printf("Nineteen");
				break;
			}
			break;
		}
		if(digit!=0){
		switch(no_of_digits){
		case 4:printf("thousand");
			break;
		case 3:printf("Hundred");
			break;
		}
		}
		if(no_of_digits==2){
			switch(digit){
			case 2:printf("Twenty");
				break;
			case 3:printf("Thirty");
				break;
			case 4:printf("Fourty");
				break;
			case 5:printf("Fifty");
				break;
			case 6:printf("Sixty");
				break;
			case 7:printf("Seventy");
				break;
			case 8:printf("Eighty");
				break;
			case 9:printf("Ninty");
				break;
			}
		}

		res=res%div;								//updating
	}
}
int pow(int x,int n){					//power function
	int r=1;
	for(;n!=0;n--){
		r*=x;
	}
	return r;
}
