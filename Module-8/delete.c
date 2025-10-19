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

    int idx;
    scanf("%d", &idx);

    
    for (int i = idx; i < n; i++)
    {
        arr[i] = arr[i + 1];
        //  printf("%d ", arr[i]);
    }
    
    
    // Decrease 1 index
    n--;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}