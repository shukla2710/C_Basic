//Demostrate the number is positiv, negative or zero
#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t Input Number : ");
	scanf("%d",&num);
	
	if(num==0)
		printf("\n\n\t Number is zero... ");
	else if(num>0)
		printf("\n\n\t Number is positive.. ");
	else
		printf("\n\n\t Number is negative... ");
}
