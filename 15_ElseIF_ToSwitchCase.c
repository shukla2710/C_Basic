#include<stdio.h>
main()
{
	int day;
	printf("\n\n Enter a day (in numbers) : ");
	scanf("%d",&day);
	
	if(day==1)
		printf("\n\n\t Sunday");
	else if(day==2)
		printf("\n\n\t Monday");
	else if(day==3)
		printf("\n\n\t Tuesday");
	else if(day==4)
		printf("\n\n\t Wednesday");
	else if(day==5)
		printf("\n\n\t Thursday");
	else if(day==6)
		printf("\n\n\t Friday");
	else if(day==7)
		printf("\n\n\t Saturday");
	else
		printf("\n\n\t Enter a proper day...");
}
