#include<stdio.h>
main()
{
	int n=2;
	
	if(n%5==0)
	{
		if(n%3==0)
			printf("\n\n\t No. only div. by both 3 & 5....");	
		else
			printf("\n\n\t No. only div. by 5 only....");
	}
	else
	{
		if(n%3==0)
			printf("\n\n\t No. only div. by 3 only....");
		else
			printf("\n\n\t No. is not div. by 3 or 5....");
	}
}
