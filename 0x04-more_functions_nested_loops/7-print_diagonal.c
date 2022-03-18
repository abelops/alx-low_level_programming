#include "main.h"

/**
 *  * print_diagonal - draws a diagonal line in the terminal
 *   * @n: the number of diagonal
 *    * Return: the result
 */
void print_diagonal(int n)
{
		int i, j;

		if (n > 0)
		{
			for (j = 1; j <= n; j++)
			{
				for (i = 1; i <= j; i++)
				{
					if (i != 1)
						_putchar(' ');
					if (i == j)
					{
						_putchar('\\');
						_putchar('\n');
					}
																			}
			}
		}
		else
			_putchar('\n');
}
