#include <stdio.h>

/**
 * main - The entry point for the program to get header of the ELF file
 * @argc: The number of arguments ot be printed
 * @argv: The pointer to array of arguments
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
