VALUE=""
SOLUTIONS := multiples_of_3_or_5/solution \
	even_fibonacci_numbers/solution

all: $(SOLUTIONS)

$(SOLUTIONS): $(SOLUTIONS).c
	@echo "Compilando $@..."
	@cc $@.c -o $@

1:
	@./multiples_of_3_or_5/solution $(VALUE)

2:
	@./even_fibonacci_numbers/solution $(VALUE)

clean:
	@rm $(SOLUTIONS)
	@echo "Executáveis removidos."
