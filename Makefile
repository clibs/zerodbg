example: example.c debug.c
	$(CC) -std=c99 $^ -o $@

.PHONY: test example
