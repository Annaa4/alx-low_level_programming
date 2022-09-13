#include <stdio.h>

/**
 * main - program that prints all possible different combinations of
 * three digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
 */

int main(void)
{
<<<<<<< HEAD
  
  int digit1, digit2, digit3;
  
  for (digit1 = 0; digit1 < 8; digit1++)
    
    {
      
      for (digit2 = digit1 + 1; digit2 < 9; digit2++)
	
	{
	  
	  for (digit3 = digit2 + 1; digit3 < 10; digit3++)
	    
	    {
	      
	      putchar((digit1 % 10) + '0');
	      
	      putchar((digit2 % 10) + '0');
	      
	      putchar((digit3 % 10) + '0');
	      
	      if (digit1 == 7 && digit2 == 8 && digit3 == 9)
		
		continue;
	      	      
	      putchar(',');
	      
	      putchar(' ');
	      
	    }
	  
	}
      
    }
  
  putchar('\n');  
  return (0);
  
=======
	int n1 = 48;
	int n2, n3;
	int com = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 != 55 || n2 != 56 || n3 != 57)
				{
					putchar(com);
					putchar(32);
				}
				n3 += 1;
			}
			n2 += 1;
		}
		n1 += 1;
	}
	putchar('\n');
	return (0);
>>>>>>> dc401371b6b75b2bed5e70268d6b51f407f7005d
}
