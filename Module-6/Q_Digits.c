#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        int num;
        scanf("%d", &num);
        do
        {
            // 1 ta number er last er j koyta number nite chai sei koyta 0 dite hobe 1 er pore (% diye)
            printf("%d ", num % 10);
            num = num / 10;
        } while (num != 0);
        printf("\n");
    }

    return 0;
}