#include <stdio.h>

/**
<<<<<<< HEAD

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */

int main(void)
  
{
  
  int a;
  
  long int b;
  
  long long int c;
  
  char d;
  
  float f;
  

  
  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
  
  printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
  
  printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
  
  printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
  
  printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
  
  return (0);
  
=======
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
>>>>>>> 25a60000db56f8ccf583dd47bd10803861bdb3d9
}
