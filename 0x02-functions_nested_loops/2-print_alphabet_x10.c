<<<<<<< HEAD
#include "holberton.h"



/**

 * print_alphabet - prints the alphabet in lowercase, followed by a new line.

 */

void print_alphabet(void)
  
{
  
  char letter;
  

  
  for (letter = 'a'; letter <= 'z'; letter++)
    
    _putchar(letter);
  

  
  _putchar('\n');
  
=======

#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
>>>>>>> 040c21739f44b36df85e1b26404351022907d429
}
