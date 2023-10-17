//Demostrate if condition by checking n>100. (greater than operator)

#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t Input a number : ");
	scanf("%d",&num);
	
	if(num>100)
	{
		printf("\n\n\t Number is greater than 100...");
	}
	else
	{
		printf("\n\n\t Number is smaller than 100...");
	}
}
