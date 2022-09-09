#include <stdio.h>

<<<<<<< HEAD


/**

 * main - Prints the alphabet in lowercase, except for q and e.

 *

 * Return: Always 0.

 */

int main(void)
  
{
  
  char letter;
  

  
  for (letter = 'a'; letter <= 'z'; letter++)
    
    {
      
      if (letter != 'e' && letter != 'q')
	
	putchar(letter);
      
    }
  

  
  putchar('\n');
  

  
  return (0);
  
=======
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
>>>>>>> 92b57668afff0be862346859f670c8de141ed00d
}
