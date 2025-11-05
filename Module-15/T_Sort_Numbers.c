#include <stdio.h>

void asending(int a, int b, int c)
{
    int min1 = a, min2 = b, min3 = c;

    int temp;

    if (min1 > min2)
    {
        temp = min1;
        min1 = min2;
        min2 = temp;
    }
    if (min2 > min3)
    {
        temp = min2;
        min2 = min3;
        min3 = temp;
    }
    if (min1 > min2)
    {
        temp = min1;
        min1 = min2;
        min2 = temp;
    }

    printf("%d\n", min1);
    printf("%d\n", min2);
    printf("%d\n", min3);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    asending(a, b, c);
    return 0;
}