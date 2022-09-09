#include <stdio.h>

<<<<<<< HEAD


/**

 * main - Prints all possible combinations of two two-digit numbers,

 *        ranging from 0-99, separated by a comma followed by a space.

 *

 * Return: Always 0.

 */

int main(void)
  
{
  
  int num1, num2;
  

  
  for (num1 = 0; num1 <= 98; num1++)
    
    {
      
      for (num2 = num1 + 1; num2 <= 99; num2++)
	
	{
	  
	  putchar((num1 / 10) + '0');
	  
	  putchar((num1 % 10) + '0');
	  
	  putchar(' ');
	  
	  putchar((num2 / 10) + '0');
	  
	  putchar((num2 % 10) + '0');
	  

	  
	  if (num1 == 98 && num2 == 99)
	    
	    continue;
	  

	  
	  putchar(',');
	  
	  putchar(' ');
	  
	}
      
    }
  

  
  putchar('\n');
  

  
  return (0);
  
=======
/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
>>>>>>> e09b9f23600a0d381e6ce6f6dcc1c867e5ad68b6
}
