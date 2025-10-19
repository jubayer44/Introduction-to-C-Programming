#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        // Two Pointer Technique
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}