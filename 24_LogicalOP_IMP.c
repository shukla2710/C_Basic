/* && is the logical AND operator used for logical tests. 
For example: "if(a && b) { i++;}". 
Any value different from 0 is considered TRUE. In this case: a && b is the same as 0 && 5 that 
is the same as FALSE AND TRUE. */

#include<stdio.h>
main()
{
   int a = 5;
   int b = 20;
   int c ;

   if ( a && b ) {
      printf("Line 1 - Condition is true\n" );
   }
	
   if ( a || b ) {
      printf("Line 2 - Condition is true\n" );
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	
   if ( a && b ) {
      printf("Line 3 - Condition is true\n" );
   } else {
      printf("Line 3 - Condition is not true\n" );
   }
	
   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   }
}
