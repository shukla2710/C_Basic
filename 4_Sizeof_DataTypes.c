//The sizeof(variable)operator computes the size of a variable
//Result in bytes : 1 byte = 8bits

#include<stdio.h>
main()
{
	int intType=sizeof(int);
	int floatType=sizeof(float);
	int charType=sizeof(char);
	int longintType=sizeof(long int);
	int doubleType=sizeof(double);
	
	printf("\n\n\t Size of Integer Data Type : %d",intType);
	printf("\n\n Size of Float Data Type : %d",floatType);
	printf("\n\n Size of Character Data Type : %d",charType);
	printf("\n\n Size of Long Integer Data Type : %d",longintType);
	printf("\n\n Size of Double Data Type : %d",doubleType);
	
}
