#include<stdio.h>
main()
{
	int  n1, n2;
	char symbol;
	
	printf("\n\n\t Enter n1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Enter n2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\t ...........................");
	printf("\n\n\t +. Addition ");
	printf("\n\n\t -. Subtraction ");
	printf("\n\n\t *. Multiplication ");
	printf("\n\n\t /. Division ");
	printf("\n\n\t ...........................");
	
	printf("\n\n Enter your choice for the operation  : ");
	scanf(" %c",&symbol);
	
	switch(symbol)
	{
		case '+' : printf("\n\n\t Addition of this two numbers : %d",(n1+n2));
				 break;
				 
		case '-' : printf("\n\n\t Subtraction of this two numbers : %d",(n1-n2));
				 break;
		
		case '*' : printf("\n\n\t Multiplication of this two numbers : %d",(n1*n2));
				 break;
				 
		case '/' : printf("\n\n\t Division of this two numbers : %d",(n1/n2));
				 break;
		
		default: printf("\n\n\t Enter a proper choice...");
				 break;
	}
	
	
	
}
