#include <stdio.h>

int parseInt(char *alg)
{
	int	integer;
	int signal;

	signal = 1 - ((-2)*(alg[0] == '-'));
	
	integer = 0;
	return (integer);
}

int main(int argc, int argv)
{
	int	number;
	int	sum;

	if (argv < 2)
	{
		printf("0\n");
		return (-1);
	}
	sum = 0;
	number = dev_atoi(argv[1]);
	while (number > 0)
	{
		if (!(number % 3) || !(number % 5))
			sum += number;
	}
	printf("%d\n", sum);
	return (0);
}