#include <stdio.h>

<<<<<<< HEAD


/**

 * main - main block

 * Description: Print the sum of even Fibonacci numbers up to a fib value

 * not exceeding 4,000,000.

 * Return: 0

 */

int main(void)
  
{
  
  int i = 1, j = 2, total = 0;
  
  int k;
  

  
  while (j < 4000000)
    
    {
      
      if (j % 2 == 0)
	
	total += j;
      

      
      k = j;
      
      j += i;
      
      i = k;
      
    }
  
  printf("%d\n", total);
  
  return (0);
  
=======
/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
>>>>>>> 754d2d18eb8c74e4c087207134d02226ec70f2c1
}
