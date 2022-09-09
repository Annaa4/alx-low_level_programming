#include <stdio.h>
<<<<<<< HEAD

#include <stdlib.h>

#include <time.h>

/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */

int main(void)
  
{
  
  char low;
  

  
  for (low = 'a'; low <= 'z'; low++)
    
    putchar(low);
  
  printf("\n");
  

  
  return (0);
  
=======
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		printf("\n");

	return (0);
>>>>>>> d4d2b86b9100b90e07cab3a55f250e1dea9ae8f4
}
