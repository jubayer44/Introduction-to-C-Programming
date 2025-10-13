#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (max <= x)
        {
            max = x;
        }
    }
    printf("%d\n", max);

    return 0;
}