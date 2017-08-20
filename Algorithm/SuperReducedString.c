/**
 * Steve has a string, s, consisting of n lowercase English alphabetic letters. In one 
 * operation, he can delete any pair of adjacent letters with same value. For example, string 
 * "aabcc" would become either "aab" or "bcc" after 1 operation.
 *
 * Steve wants to reduce s as much as possible. To do this, he will repeat the above 
 * operation as many times as it can be performed. Help Steve out by finding and printing s's 
 * non-reducible form!
 *
 * Note: If the final string is empty, print "Empty String".
 */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* super_reduced_string(char* s){
    int s_len = strlen(s);
    for (int s_i = 1; s_i < s_len; s_i++) {
        if (s[s_i] && s[s_i] == s[s_i - 1]) {
            for (int s_j = s_i - 1; s_j < s_len - 1; s_j++) {
                s[s_j] = s[s_j + 2];
            }
            s[--s_len] = s_i = 0;
        }
    }
    s_len = strlen(s);
    return ! s_len ? "Empty String" : s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = super_reduced_string(s);
    printf("%s\n", result);
    return 0;
}

