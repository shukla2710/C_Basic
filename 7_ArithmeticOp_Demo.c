#include<stdio.h>
main()
{
	int n1, n2;
	
	n1=10;
	n2=20;
		
	printf("\n\n\t Addition  = %d",(n1+n2));
	printf("\n\n\t Subtraction = %d", (n1-n2));
	printf("\n\n\t Multiplication = %d", (n1*n2));
	printf("\n\n\t Division = %d", (n1/n2));
	printf("\n\n\t Modulo = %d", (n1%n2));
	
	printf("\n\n\t Increment op. result : %d", n1++);
	printf("\n\n\t Now n1 = %d",n1);
	printf("\n\n\t Increment op. result : %d", ++n1);
	printf("\n\n\t Now n1 = %d",n1);
		
}
