#include <stdio.h>

void printTable()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d\n", n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main()
{
    printTable();

    return 0;
}