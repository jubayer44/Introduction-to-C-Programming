#include <stdio.h>

void printSep()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
            printf(" ");
    }
}

int main()
{
    printSep();
    return 0;
}