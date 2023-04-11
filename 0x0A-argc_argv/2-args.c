#include <stdio.h>
#include "main.h"

/**
* main - print each argument passed to program on a line
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{

int i;
<<<<<<< HEAD
for(i = 0; i < argc; i++)
=======
for (i = 0; i < argc; i++)
>>>>>>> 104722750b996762326c466220927e440195f2c3
printf("%s\n", argv[i]);
return (0);
}
