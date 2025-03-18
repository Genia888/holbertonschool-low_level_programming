#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: The argument count
 * @argv: The argument vector (array of strings)
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    operation = get_op_func(argv[2]);

    if (operation == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", operation(num1, num2));
    return (0);
}

