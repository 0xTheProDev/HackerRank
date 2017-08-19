/**
 * Colleen is turning n years old! Therefore, she has candles of various heights on her cake,
 * and candle i has height height<i> . Because the taller candles tower over the shorter
 * ones, Colleen can only blow out the tallest candles.
 *
 * Given the height<i> for each individual candle, find and print the number of candles she 
 * can successfully blow out
 * Link: https://www.hackerrank.com/challenges/birthday-cake-candles
 */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int ar_size, int* ar) {
    int *num_arr = malloc(sizeof(int) * 10000001);
    memset(num_arr, 0, sizeof(num_arr));
    int max = INT_MIN;
    for (int ar_i = 0; ar_i < ar_size; ar_i++) {
        num_arr[ar[ar_i]]++;
        if (max < ar[ar_i]) {
            max = ar[ar_i];
        }
    }
    return num_arr[max];
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i", &ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, ar);
    printf("%d\n", result);
    return 0;
}

