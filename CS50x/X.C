#include <stdio.h>
#include <string.h>

#include "cs50.h"

int main(void)
{
    int n = GetInt();
    if(n < 3 || n > 23 || !(n&1))
        return -1;
    char Box[n][n];
    memset(Box, ' ', sizeof(Box));
    for(int i = 0; i < n; i++)
        Box[i][0] = Box[0][i] = Box[i][n - 1] = Box[n - 1][i] = Box[i][i] = Box[i][n - i - 1] = '*';

    for(int i = 0, j = 0; j < n || (j = 0, putchar('\n'), ++i) < n ; j++)
        putchar(Box[i][j]);
}
