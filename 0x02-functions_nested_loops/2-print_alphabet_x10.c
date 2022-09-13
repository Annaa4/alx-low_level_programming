#include "main.h"
<<<<<<< HEAD

/**

 * print_alphabet_x10 - Print alphabet in lowercase 10 times

 * Return: 0

 */

void print_alphabet_x10(void)
  
{
  
  int i = 0;
  
  char c;
  

  
  while (i < 10)
    
    {
      
      c = 'a';
      
      while (c <= 'z')
	
	{
	  
	  _putchar(c);
	  
	  c++;
	  
	}
      
      _putchar('\n');
      
      i++;
      
    }
  
=======
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
>>>>>>> 76f4e39702ee023694e315b382b9335c57d1cfa6
}
