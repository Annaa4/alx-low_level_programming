#include "main.h"
<<<<<<< HEAD

/**

 * times_table -  a function that prints the 9 times table, starting with 0

 * rone = row, cone = column, d = digits of current result

 * Return: times table

 * add extra space past single digit

 */

void times_table(void)
  
{
  
  int rone, cone, d;
  

  
  for (rone = 0; rone <= 9; rone++)
    
    {
      
      _putchar('0');
      
      _putchar(',');
      
      _putchar(' ');
      
      for (cone = 1; cone <= 9; cone++)
	
	{
	  
	  d = (rone * cone);
	  
	  if ((d / 10) > 0)
	    
	    {
	      
	      _putchar((d / 10) + '0');
	      
	    }
	  
	  else
	    
	    {
	      
	      _putchar(' ');
	      
	    }
	  
	  _putchar((d % 10) + '0');
	  

	  
	  if (cone < 9)
	    
	    {
	      
	      _putchar(',');
	      
	      _putchar(' ');
	      
	    }
	  
	}
      
      _putchar('\n');
      
    }
  

  
=======
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int rone, cone, d;

	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			d = (rone * cone);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

>>>>>>> 1e21bc3bc4a4cbe0affb4b1a408a3ee5ed6dcf0c
}
