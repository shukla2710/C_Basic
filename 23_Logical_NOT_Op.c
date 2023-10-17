#include<stdio.h>
main()
{
	int a = 10, b = 20;
 
    // condition returned true but, logical NOT operator changed, it to false
    if (!(a > 0 && b > 0))
	{
        printf("\n\n\t Both values are greater than 0...");
    }
    else 
	{
        printf("\n\n\t Both values are less than 0...");
    }
}
