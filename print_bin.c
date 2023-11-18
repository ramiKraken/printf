#include "main.h"

/**
 * print_bin - prints binary number
 * @val: a parameter
 * Return: an int
 */
int print_bin(va_list val)
{
	int cont = 0;
	int flag = 0;
	int j, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

    j = 0;
    while (j < 32)
    {
        p = ((a << (31 - j)) & num);
        if (p >> (31 - j))
            flag = 1;
        if (flag)
        {
            b = p >> (31 - j);
            _putchar(b + 48);
            cont++;
        }
        j++;
    }
    
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
