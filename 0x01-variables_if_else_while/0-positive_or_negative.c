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
  
  int n;
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  

  
  if (n > 0)
    
    printf("%d is positive\n", n);
  
  else if (n == 0)
    
    printf("%d is zero\n", n);
  
  else
    
    printf("%d is negative\n", n);
  

  
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
>>>>>>> 31e13b3e7f70c0ac0cf88610040d3ba10e3d7890
}
