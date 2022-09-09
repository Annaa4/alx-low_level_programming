#include <stdio.h>

<<<<<<< HEAD


/**

 * main - Prints all possible combinations of single-digit numbers.

 *

 * Return: Always 0.

 */

int main(void)
  
{
  
  int num;
  

  
  for (num = 0; num <= 9; num++)
    
    {
      
      putchar((num % 10) + '0');
      
      if (num == 9)
	
	continue;
      

      
      putchar(',');
      
      putchar(' ');
      
    }
  

  
  putchar('\n');
  

  
  return (0);
  
=======
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
>>>>>>> 25a612ab74f050a1af29d6b8b190e58f2b5cabf9
}
