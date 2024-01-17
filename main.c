#include "monty.h"

/**
* main - monty code interprete
* @argc: num of args
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	bus_t bus = {NULL, NULL, NULL, 0};
	char *contnt;
	FILE *file;
	size_t size = 0;
	ssize_t r_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		contnt = NULL;
		r_line = getline(&contnt, &size, file);
		bus.contnt = contnt;
		count++;
		if (r_line > 0)
		{
			execute(contnt, &stack, count, file);
		}
		free(contnt);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
