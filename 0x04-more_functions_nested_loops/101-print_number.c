#include "main.h"
<<<<<<< HEAD

/**

 * print_number - prints numbers

 * @n: number to be printed

 * Return:void

 */



void print_number(int n)
  
{
  
  unsigned int x;
  

  
  x = n;
  
  if (n < 0)
    
    {
      
      _putchar(45);
      
      x = -n;
      
    }
  
  if (x / 10)
    
    print_number(x / 10);
  
  _putchar((x % 10) + '0');
  
=======
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
>>>>>>> 7d167ae8d69935bd43932e4f2acea6c61ee58f11
}
