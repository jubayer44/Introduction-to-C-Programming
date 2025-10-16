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

    long long int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    if (sum < 0)
    {
        sum = -sum;
    }
    printf("%lld\n", sum);

    return 0;
}