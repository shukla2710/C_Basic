/*In C programming, a character variable holds ASCII value (an integer number between 0 and 127) 
rather than that character itself. This integer value is the ASCII code of the character. 
For example, the ASCII value of 'A' is 65. */

#include<stdio.h>
main()
{
	char ch;    
    printf("\n\n Enter a character");  
    scanf("%c",&ch);   
    printf("\n\n The ascii value of %c the ch variable is : %d", ch,ch);  
}
