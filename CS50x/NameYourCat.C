#include <stdio.h>

#include "cs50.h"

int belong(char c)
{
    if(c == 'a' || c == 'i' || c == 'c' || c == 'e' || c == 'k' || c == 'n' || c == 't')
        return 1;
    return 0;
}

int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int array[n];
    for(i = 0, j = 0; i < n; i++)
        if(belong(s[i]))
            array[j++] = i;
    for(i = 0, j = j - 1; i < j; i++, j--)
        s[array[i]] ^= s[array[j]] ^= s[array[i]] ^= s[array[j]];
    printf("%s", s);
}
