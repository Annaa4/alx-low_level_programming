#include <stdio.h>

<<<<<<< HEAD


/**

 * main - Prints all the numbers of base 16 in lowercase.

 *

 * Return: Always 0.

 */

int main(void)
  
{
  
  int num;
  
  char letter;
  

  
  for (num = 0; num < 10; num++)
    
    putchar((num % 10) + '0');
  

  
  for (letter = 'a'; letter <= 'f'; letter++)
    
    putchar(letter);
  

  
  putchar('\n');
  

  
  return (0);
  
=======
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
>>>>>>> 94c8681996f7022cfee93a46bc003839b2c29e74
}
