#include <stdio.h>
#include <string.h>

#include "cs50.h"

int strrev(char *str, int n)
{
    while(n--)
        putchar(str[n]);
    return 0;
}

int main(void)
{
    string s = GetString();
    int n = strlen(s);
    char st[101] = {0};
    for(int i = 0, j = 0; i < n || strrev(st, j); i++){
        if(isalnum(s[i]))
            st[j++] = s[i];

        else{
            strrev(st, j);
            putchar(s[i]);
            memset(st, '\0', sizeof(st));
            j = 0;
        }
    }
}
