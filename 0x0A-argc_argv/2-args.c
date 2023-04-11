#include <stdio.h>
#include "main.h"
/**
* main - print each argument passed to program on a line
* @argc: argument counter
* @argv: pointer 
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i;
        for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
