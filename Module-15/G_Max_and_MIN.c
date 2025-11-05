#include <stdio.h>
#include <limits.h>

int max(int arr[], int len)
{
    int maxNum = INT_MIN;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int min(int arr[], int len)
{
    int minNum = INT_MAX;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }
    return minNum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxNumber = max(arr, n);
    int minNumber = min(arr, n);

    printf("%d %d", minNumber, maxNumber);

    return 0;
}