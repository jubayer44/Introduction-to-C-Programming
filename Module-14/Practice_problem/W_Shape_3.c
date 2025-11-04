#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // int star = 2 * n-1; // reverse
    // int space = 0;
    int star = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {

        // Printing Space
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        // Printing Star
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;
        space--;
        printf("\n");
    }

    star -= 2;
    space++;

    for (int i = 0; i < n; i++)
    {

        // Printing Space
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        // Printing Star
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star -= 2;
        space++;
        printf("\n");
    }

    return 0;
}