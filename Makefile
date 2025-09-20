VALUE="0"
SOLUTIONS := multiples_of_3_or_5/solution
all: $(SOLUTIONS)

$(SOLUTIONS):
	@echo "Compilando $@..."
	@cc $@.c -o $@


1:
	@./multiples_of_3_or_5/solution $(VALUE)

clean:
	@rm $(SOLUTIONS)
	@echo "Executáveis removidos."
