#include<stdio.h>
main()
{
	int choice, n1, n2;
	
	printf("\n\n\t Enter n1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Enter n2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\t ...........................");
	printf("\n\n\t 1. Addition ");
	printf("\n\n\t 2. Subtraction ");
	printf("\n\n\t 3. Multiplication ");
	printf("\n\n\t 4. Division ");
	printf("\n\n\t ...........................");
	
	printf("\n\n Enter your choice for the operation  : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("\n\n\t Addition of this two numbers : %d",(n1+n2));
				 break;
				 
		case 2 : printf("\n\n\t Subtraction of this two numbers : %d",(n1-n2));
				 break;
		
		case 3 : printf("\n\n\t Multiplication of this two numbers : %d",(n1*n2));
				 break;
				 
		case 4 : printf("\n\n\t Division of this two numbers : %d",(n1/n2));
				 break;
		
		default: printf("\n\n\t Enter a proper choice...");
				 break;
	}
	
}
