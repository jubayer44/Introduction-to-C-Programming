#include <stdio.h>
#include <limits.h>

int main()
{
    int length;
    scanf("%d", &length);
    int arr[length];
    int lowest = 0;
    int index_1;

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            lowest = arr[i];
        }
        if (arr[i] <= lowest)
        {
            lowest = arr[i];
        }
    }

      for (int i = 0; i < length; i++)
    {

        if (lowest == arr[i])
        {
            index_1 = i + 1;
            break;
        }
    }

    printf("%d %d", lowest, index_1);

    return 0;
}