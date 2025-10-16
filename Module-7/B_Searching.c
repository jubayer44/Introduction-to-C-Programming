#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);
    int arr[length];
    int b;

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &b);
        if (arr[i] == b)
        {
            printf("%d", i);
            break;
        }
        else if (i == length - 1)
        {
            printf("%d", -1);
        }
    }

    return 0;
}