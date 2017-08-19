/**
 * HackerLand University has the following grading policy:
 *
 *  * Every student receives a grade in the inclusive range from 0 to 100 .
 *  * Any grade less than 40 is a failing grade.
 *
 * Sam is a professor at the university and likes to round each student's grade according to
 * these rules:
 *
 *  * If the difference between the grade and the next multiple of 5 is less than 3, round up 
 * to the next multiple of 5.
 *  * If the value of grade is less than 38, no rounding occurs as the result will still be a 
 * failing grade.
 *
 * For example, grade = 84 will be rounded to 85 but grade = 29 will not be rounded because 
 * the rounding would result in a number that is less than 40.
 *
 * Given the initial value of grade for each of Sam's n students, write code to automate the 
 * rounding process. For each grade<i> , round it according to the rules above and print the 
 * result on a new line.
 */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
    int *results = malloc(sizeof(int) * grades_size);
    for (int grade_i = 0; grade_i < grades_size; grade_i++) {
        results[grade_i] = grades[grade_i];
        if (grades[grade_i] > 37 && grades[grade_i] % 5 > 2) {
            results[grade_i] += 5 - grades[grade_i] % 5;
        }
    }
    *result_size = grades_size;
    return results;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size;
    int* result = solve(n, grades, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}

