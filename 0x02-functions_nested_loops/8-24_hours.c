#include "main.h"
<<<<<<< HEAD

/**

 * jack_bauer - function that prints every minute of the day, 24 hour clock

 * h = hour, m = minutes

 * / 10 allows second digit to rotate

 * for loop breaks before passing 24:00

 * Return: 24 hour clock line by line

 */

void jack_bauer(void)
  
{
  
  int h, m;
  

  
  for (h = 0; h < 24; h++)
    
    {
      
      for (m = 0; m < 60; m++)
	
	{
	  
	  _putchar((h / 10) + '0');
	  
	  _putchar((h % 10) + '0');
	  
	  _putchar(':');
	  
	  _putchar((m / 10) + '0');
	  
	  _putchar((m % 10) + '0');
	  
	  _putchar('\n');
	  
	}
      
    }
  
=======
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
>>>>>>> 3b222d87b6661cc9f4d37b7cee26b437fe7f6f1e
}
