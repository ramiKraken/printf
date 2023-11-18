#include "main.h"
/**
 * print_exc_string - print exclusives string
 * @val: parameter
 * Return: an int
 */

int print_exc_string(va_list val)
{
	char *s;
	int j, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < 32 || s[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[j];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[j]);
			length++;
		}
	}


    j = 0;
    while (s[j] != '\0')
    {
        if (s[j] < 32 || s[j] >= 127)
        {
            _putchar('\\');
            _putchar('x');
            length = length + 2;
            value = s[j];
            if (value < 16)
            {
                _putchar('0');
                length++;
            }
            length = length + print_HEX_extra(value);
        }
        else
        {
            _putchar(s[j]);
            length++;
        }
        j++;
    }

	return (length);
}
