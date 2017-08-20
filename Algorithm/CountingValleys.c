/**
 * Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small 
 * details like topography. During his last hike, he took exactly n steps. For every step he 
 * took, he noted if it was an uphill or a downhill step. Gary's hikes start and end at sea 
 * level. We define the following terms:
 *
 * * A mountain is a non-empty sequence of consecutive steps above sea level, starting with a 
 * step up from sea level and ending with a step down to sea level.
 * * A valley is a non-empty sequence of consecutive steps below sea level, starting with a 
 * step down from sea level and ending with a step up to sea level.
 *
 * Given Gary's sequence of up and down steps during his last hike, find and print the number 
 * of valleys he walked through.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d%*c", &n);
    char str[n];
    for (int str_i = 0; str_i < n; str_i++) {
        str[str_i] = getchar();
    }
    int height = 0, count = 0;
    for (int str_i = 0; str_i < n; str_i++) {
        switch (str[str_i]) {
            case 'U':
                height++;
                break;
            case 'D':
                if (height == 0) {
                    count++;
                }
                height--;
                break;
            default:
                return 1;
        }
    }
    printf("%d", count);
    return 0;
}

