#include "main.h"

<<<<<<< HEAD


/**

 * largest_number - returns the largest of 3 numbers

 * @a: first int

 * @b: second int

 * @c: third int

 * Return: largest number

 */



int largest_number(int a, int b, int c)
  
{
  
  int largest = b;
  

  
  if (a > b)
    
    {
      
      largest = a;
      
    }
  
  else if (c > b)
    
    {
      
      largest = c;
      
    }
  

  
  return (largest);
  
=======
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
>>>>>>> a6828b6d386cbf0a678e8449cc8944a980b78483
}
