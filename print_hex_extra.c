#include "main.h"

/**
 * print_hex_extra - prints an hexadec. number
 * @num: arguments
 * Return: counter
 */
int print_hex_extra(unsigned long int num)
{
	long int *array;
    long int j;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));
 
    j = 0;
    while (j < counter)
    {
        array[j] = temp % 16;
        temp = temp / 16;
        j++;
    }

    j = counter - 1;
    while (j >= 0)
    {
        if (array[j] > 9)
        {
            array[j] = array[j] + 39;
        }
        _putchar(array[j] + '0');
        j--;
    }
	free(array);
	return (counter);
}
