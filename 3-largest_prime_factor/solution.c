#include <stdio.h>
#include <ctype.h>

int	_issignal(char c, int *signal)
{
	if (c == 43 || c == 45)
	{
		*signal = 44 - c;
		return (1);
	}
	return (0);
}

unsigned long	parseInt(const char *nptr)
{
	unsigned long		integer;
	int		signal;
	size_t	in;

	in = 0;
	signal = 1;
	integer = 0;
	if (nptr == NULL)
		return (0);
	while (nptr[in] && isspace(nptr[in]))
		in++;
	in += _issignal(nptr[in], &signal);
	while (nptr[in] && isdigit(nptr[in]))
	{
		integer = integer * 10 + (nptr[in] - '0');
		in++;
	}
	return (signal * integer);
}

int main(int argc, char **argv)
{
    unsigned long number;
    unsigned long possible;

    number = 600851475143;
    if (argc > 1)
        number = parseInt(argv[1]);
    possible = number / 2;
    while (possible)
    {
        if (number % possible == 0)
        {
            printf("%zu\n", possible);
            return (0);
        }
        possible--;
    }
    return (0);
}