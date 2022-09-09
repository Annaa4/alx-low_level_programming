#include <stdio.h>

<<<<<<< HEAD


/**

 * main - Prints the lowercase alphabet in reverse.

 *

 * Return: Always 0.

 */

int main(void)
  
{
  
  char letter;
  

  
  for (letter = 'z'; letter >= 'a'; letter--)
    
    putchar(letter);
  

  
  putchar('\n');
  

  
  return (0);
  
=======
/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
>>>>>>> 002a1a054f742db92b4410bf14f230413a55a9fc
}
