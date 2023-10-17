//Demostrate the boolean value by if. Check if student is present for 1, absent for 0. if(present).
#include<stdio.h>
main()
{
	int present;
	
	printf("\n\n\t Input a present status : ");
	scanf("%d",&present);
	
	if(present)
	{
		printf("\n\n\t The student is present in the class...");
	}
	
	else
	{
		printf("\n\n\t The student is absent in the class...");
	}
}

