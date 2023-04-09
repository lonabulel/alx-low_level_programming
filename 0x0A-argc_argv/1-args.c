#include "stdio.h"
/**
 * main - Entry point;prints number of arguments passed through it
 * @argc: number of arguments entered in Command Line
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
