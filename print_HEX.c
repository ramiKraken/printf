#include "main.h"

/**
 * print_HEX - prints hexadecimal number
 * @val: arguments
 * Return: counter
 */
int print_HEX(va_list val)
{
	int *array;
    int j;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
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

    {
        j = counter - 1; // Creating a new scope for j
        while (j >= 0)
        {
            if (array[j] > 9)
                array[j] = array[j] + 7;
            _putchar(array[j] + '0');
            j--;
        }
    }
    free(array);

	return (counter);
}