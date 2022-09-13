#include "main.h"
<<<<<<< HEAD

/**

 * print_last_digit - a function that prints the last digit of a number

 * @nld: number's last digit result

 * Return: value of the last digit

 */

int print_last_digit(int nld)
  
{
  
  int pld;
  

  
  pld = (nld % 10);
  

  
  if (pld < 0)
    
    {
      
      pld = (-1 * pld);
      
    }
  

  
  _putchar(pld + '0');
  
  return (pld);
  
=======
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
>>>>>>> 538280416accb9c242ead1fce7fca3ed3a6214f7
}
