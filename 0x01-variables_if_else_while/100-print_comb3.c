#include <stdio.h>
/**
*main -Entry point
*
*Description: 'the program's description'
*
*Return: Always 0 (Success)
*
*/
int main(void)
{
	int num_1, num_2;

	num_1 = '1';
	num_2 = '1';

	while (num_1 <= '9')
	{
		while (num_2 <= '9')
		{
			if (num_1 <= num_2)
			{
				putchar(num_1);
				putchar(num_2);
				if (num_1 != '9' || (num_1 == '9' && num_2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num_2++;
		}
		num_1++;
		num_2 = '0';
	}
	putchar('\n');
	return (0);
}
