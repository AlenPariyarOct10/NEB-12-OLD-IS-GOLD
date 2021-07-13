#include<stdio.h>

int main()
{
//	WAP to input any 10 numbers in an array and display it. Find the biggest number amoung the input numbers.


	int num[10],biggest,a,any;
	
	for(a=0;a<=9;a++){
		printf("[%d] Enter Number : ",a+1);
		scanf("%d",&num[a]);
	}
	
	any = num[0];
	

	
	for(a=0;a<=9;a++){
		printf("NUMBERS YOU ENTERED ARE : \n");
		printf("%d\n",num[a]);
	}
	
	
	for(a=0;a<=9;a++){
		if(num[a]>any){
			any = num[a];
		}
	}
	
	printf("\n\n The Biggest Number is : %d",any);

	

	
	
	
	
	
	
	
	
	return 0;
}
