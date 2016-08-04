#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "cs50.h"

int main(void)
{
    string st = GetString();
    int n = strlen(st);
    char op[2 * n];
    memset(op, '\0', sizeof(op));
    for(int i = 0, j = 0; i < n; i++, j++){
        op[j] = st[i];
        if(st[i] == ','){
            op[j + 1] = ' ';
            j++;
        }
        else if(st[i] == '.'){
            op[j + 1] = ' ';
            op[j + 2] = toupper(st[i + 1]);
            i++, j += 2;
        }
    }
    printf("%s\n", op);
}
