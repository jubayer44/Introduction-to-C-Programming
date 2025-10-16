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
        if (arr[i] <= 10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}