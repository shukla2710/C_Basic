//To demostrate the concept of variable & how to print the value of the variable.

#include<stdio.h>
main()
{
	//int a=10; //int is a data type to store numerical values.
	//int b=20;
	int a,b;
	printf(" a = %d",a); //%d is the format specifier here to print int value.
	printf(" b = %d",b);
	
	int myvar;
	printf("\n\n Input any value : ");
	scanf("%d",&myvar);
	
	printf("\n\n My entered value  : %d",myvar);
}
