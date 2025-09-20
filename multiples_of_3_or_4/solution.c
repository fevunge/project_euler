#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int	ft_issignal(char c, int *signal)
{
	if (c == 43 || c == 45)
	{
		*signal = 44 - c;
		return (1);
	}
	return (0);
}

int	parseInt(const char *nptr)
{
	int		integer;
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
	int	number;
	int	sum;
f
	if (argc < 2)
	{
		printf("0\n");
		return (-1);
	}
	sum = 0;
	number = parseInt(argv[1]);
	while (--number > 0)
	{
		if (!(number % 3) || !(number % 5))
			sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
