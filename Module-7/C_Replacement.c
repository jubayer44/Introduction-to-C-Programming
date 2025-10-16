#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);
    int arr[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", 2);
        }
        else if (arr[i] == 0)
        {
            printf("%d ", 0);
        }

        else
        {
            printf("%d ", 1);
        }
    }

    return 0;
}