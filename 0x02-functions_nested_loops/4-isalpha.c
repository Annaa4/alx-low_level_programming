#include "main.h"
<<<<<<< HEAD

/**

 * _isalpha - Check if character is an alphabetic character.

 * @c: type int character

 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise

 */

int _isalpha(int c)
  
{
  
  if ((c > 64 && c < 91) || (c > 96 && c < 123))
    
    return (1);
  
  else
    
    return (0);
  
=======
/**
 * _isalpha - Check if character is an alphabetic character.
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
>>>>>>> 228c6f522412ab7dbe34f827257d7fc65ffbd724
}
