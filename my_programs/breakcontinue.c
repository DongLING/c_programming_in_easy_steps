#include <stdio.h>

int main()
{
  int i, j;

  for( i = 1; i < 4; i++ )
  {
    for( j = 1; j < 4; j++ )
    {
 
	/* Uncomment this block to add a continue...
        if( i == 1 && j == 1 )
         {
           printf( "Continues inner loop when i=%d and j=%d\n" , i, j ) ;
           continue;
         }
	... */


	 /* Uncomment this block to add a break... 
         if( i == 2 && j == 1 )
         {
           printf( "Breaks inner loop when i=%d and j=%d\n" , i, j ) ;
           break;
         }
	 ... */

          printf( "Running i=%d j=%d\n", i, j ) ;
    }
  }

  return 0;
}
