#include "main.h"

/**
 * print_HEX_extra - prints a hexadec. number
 * @num: number to print
 * Return: counter
 */
int print_HEX_extra(unsigned int num)
{
	int j;
	int *array;
	int counter = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

    j = 0;

    while (j < counter) 
    {
        array[j] = tem % 16;
        tem /= 16;
        j++;
    }

    j = counter - 1;
    while (j >= 0)
    {
        if (array[j] > 9)
        {
            array[j] = array[j] + 7;
        }
        _putchar(array[j] + '0');
        j--;
    }
	free(array);
	return (counter);
}