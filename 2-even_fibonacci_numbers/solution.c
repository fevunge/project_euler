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

int main(int argc, char **argv) {

	int	current;
	int	next;
	int limit;
	int aux;
	long sum;

	if (argc > 1)
		limit = 4000000;
	else
		limit = parseInt(argv[1]);
	current = 1;
	next = 2;
	sum = 0;
	while (current <= limit)
	{
		if (current % 2 == 0)
			sum += current;
		aux = current;
		current = next;
		next +=  aux;
	}
	printf("%d\n", sum);
	return 0;
}