#include <stdio.h>

#include "cs50.h"

int main(void)
{
    unsigned int Y;
    scanf("%u", &Y);
    if((Y % 100 == 0 && Y % 400 == 0) || (Y % 100 != 0 && Y % 4 == 0))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
}
