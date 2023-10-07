#include <stdio.h>
void printNumber(int num) {
    putchar('0' + (num / 10) % 10);
    putchar('0' + num % 10);
}

int main(void)
{
    for (int i = 0; i <= 99; i++)
    {
        for (int j = i; j <= 99; j++)
       	{
            printNumber(i);
            putchar(' ');
            printNumber(j);

            if (!(i == 99 && j == 99))
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }
    return (0);
}
