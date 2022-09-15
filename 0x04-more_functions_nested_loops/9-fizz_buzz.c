#include <stdio.h>
<<<<<<< HEAD

/**

 *

 * Return: void.

 */



int main(void)
  
{
  

  
  int i = 1;
  

  
  while (i <= 100)
    
    {
      
      if (i % 3 == 0 && i % 5 == 0)
	
	{
	  
	  printf("FizzBuzz");
	  
	}
      
      else if (i % 3 == 0)
	
	{
	  
	  printf("Fizz");
	  
	}
      
      else if (i % 5 == 0)
	
	{
	  
	  printf("Buzz");
	  
	}
      
      else
	
	{
	  
	  printf("%i", i);
	  
	}
      

      
      if (i != 100)
	
	{
	  
	  putchar(' ');
	  
	}
      

      
      i++;
      
    }
  
  putchar('\n');
  
  return (0);
  

  
=======
/**
 *
 * Return: void.
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);

>>>>>>> 7d7d312f370727fd71876a4ece45cf591f044f74
}
