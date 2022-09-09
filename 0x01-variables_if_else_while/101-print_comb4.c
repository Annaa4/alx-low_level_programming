#include <stdio.h>
#include <stdlib.h>



#include <time.h>

<<<<<<< HEAD
=======
#include <stdlib.h>
>>>>>>> 8214337f04e698e6a3494ec8d19caf450bf6c4de

#include <time.h>

<<<<<<< HEAD
/**

 * main - Prints all possible combinations of three different digits,

 *        in ascending order, separated by a comma followed by a space.

 *

 * Return: Always 0.

 */

int main(void)
  
{
  
  int digit1, digit2, digit3;
  

  
  for (digit1 = 0; digit1 < 8; digit1++)
    
    {
      
      for (digit2 = digit1 + 1; digit2 < 9; digit2++)
	
	{
	  
	  for (digit3 = digit2 + 1; digit3 < 10; digit3++)
	    
	    {
	      
	      putchar((digit1 % 10) + '0');
	      
	      putchar((digit2 % 10) + '0');
	      
	      putchar((digit3 % 10) + '0');
	      

	      
	      if (digit1 == 7 && digit2 == 8 && digit3 == 9)
		
		continue;
	      

	      
	      putchar(',');
	      
	      putchar(' ');
	      
	    }
	  
	}
      
    }
  

  
  putchar('\n');
  

  
  return (0);
  
=======

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
>>>>>>> 8214337f04e698e6a3494ec8d19caf450bf6c4de
}
