#include "main.h"

<<<<<<< HEAD


/**

 * print_most_numbers - prints numbers

 * Return:0

 */



void print_most_numbers(void)
  
{
  
  char n = 0;
  

  
  while (n <= 9)
    
    {
      
      if (n != 2 && n != 4)
	
	{
	  
	  _putchar('0' + n);
	  
	}
      

      
      n++;
      
    }
  
  _putchar('\n');
  

  
=======
/**
 * print_most_numbers - prints numbers
 * Return:0
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}

		n++;
	}
	_putchar('\n');

>>>>>>> b701e2def18dc726252bc82e1f6d623e4aaf9ae9
}
