VALUE=""
SOLUTIONS := 1-multiples_of_3_or_5/solution \
	2-even_fibonacci_numbers/solution \
	3-largest_prime_factor/solution

all: $(SOLUTIONS)

$(SOLUTIONS): $(SOLUTIONS).c
	@echo "Compilando $@..."
	@cc $@.c -o $@

1:
	@./1-multiples_of_3_or_5/solution $(VALUE)

2:
	@./2-even_fibonacci_numbers/solution $(VALUE)

3:
	@./3-largest_prime_factor/solution

clean:
	@rm $(SOLUTIONS)
	@echo "Executáveis removidos."
