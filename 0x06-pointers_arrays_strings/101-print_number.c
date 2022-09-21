#include "main.h"

<<<<<<< HEAD


/**

 * print_number - Prints an integer.

 * @n: The integer to be printed.

 */



void print_number(int n)
  
{
  
  unsigned int num = n;
  

  
  if (n < 0)
    
    {
      
      _putchar('-');
      
      num = -num;
      
    }
  

  
  if ((num / 10) > 0)
    
    print_number(num / 10);
  

  
  _putchar((num % 10) + '0');
  
=======
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
>>>>>>> e123f4b18046efcff710ddce6e465fc13741380c
}
