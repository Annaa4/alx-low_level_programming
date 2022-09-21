#include "main.h"
<<<<<<< HEAD

/**

 * *rot13 - encodes a string using rot13

 *

 * @rot: int to check

 *

 * Return: 0 is success

 */

char *rot13(char *rot)
  
{
  
  int a, b;
  
  char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  
  char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
  

  
  for (a = 0; rot[a] != '\0'; a++)
    
    for (b = 0; input[b] != '\0'; b++)
      
      if (rot[a] == input[b])
	
	{
	  
	  rot[a] = output[b];
	  
	  break;
	  
	}
  
  return (rot);
  
=======
/**
 * *rot13 - encodes a string using rot13
 *
 * @rot: int to check
 *
 * Return: 0 is success
 */
char *rot13(char *rot)
{
	int a, b;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; rot[a] != '\0'; a++)
		for (b = 0; input[b] != '\0'; b++)
			if (rot[a] == input[b])
			{
				rot[a] = output[b];
				break;
			}
	return (rot);
>>>>>>> 249c16047beac13b00fb489adc97b5e16069a488
}
