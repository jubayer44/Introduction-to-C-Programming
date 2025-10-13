#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);
    if(n >= 'a' && n <= 'z'){
        char c = n - 32;
        printf("%c\n", c);
    } else {
        char c = n + 32;
        printf("%c\n", c);
    }
    return 0;
}