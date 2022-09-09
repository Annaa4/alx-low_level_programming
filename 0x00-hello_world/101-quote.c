/*
<<<<<<< HEAD

 * File: 101-quote.c

 * Auth: Anna Ndiaye

 */



#include <unistd.h>



/**

 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",

 *                followed by a new line, to standard error.

 *

 * Return: Always 1.

=======
 * File: 101-quote.c
 * Auth: Anna Ndiaye
 */

#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
>>>>>>> b00041344a497a0973081ab918b676fe876a3ad7
 */

int main(void)
  
{
<<<<<<< HEAD
  
  write(2,
	
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	
	59);
  
=======
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
>>>>>>> b00041344a497a0973081ab918b676fe876a3ad7

  
  return (1);
  
}
