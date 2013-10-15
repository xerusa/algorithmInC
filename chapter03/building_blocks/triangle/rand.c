/*
 * File: rand.c
 * Note: Implementation of the functions declared in rand.h.
 * Time: 2013-08-24 20:43
 */

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "rand.h"


/* Function randNum:
 * Generate random numbers:
 *
 * Arguments:
 * factor: determine the types of random numbers.
 *
 * case 'b': return bit numbers randomly (For example 0 and 1).
 * case 'i': return integers randomly (For example 1, 200, 321 etc.).
 * case 'd': return double numbers randomly (For example 1.23, 3.22 etc.).
 * default : return integers randomly (For example 1, 200, 321 etc.).
 */
static Number simpleRandNum(char factor) {
    switch (factor) {
        case 'i':
            return rand();
            break;
        case 'd':
            return rand() / (Number)RAND_MAX;
            break;
        case 'b':
            return rand() >= RAND_MAX / 2;
            break;
        default:
            return rand();
            break;
    }
}


/* Function randNum:
 * Generate random numbers limited by range.
 *
 * Arguments:
 * range: Limit the range of random numbers
 *
 * Example:
 * randNum(0)  : return 0 and 1 randomly.
 * randNum(100):
 *      typedef int    Number: return 0 ~ 99 randomly.
 *      typedef double Number: return 0.00 ~ 99.99 randomly.
 *
 * Depend on:
 * simpleRandNum()
 */
Number randNum(int range) {
    if (range == 0) {
        return simpleRandNum('b');
    } else {
        if (sizeof(Number) == sizeof(double))
            return simpleRandNum('d') * range;
        else if (sizeof(Number) == sizeof(int))
            return (int)simpleRandNum('i') % range;
    }
}


/* Function: randParam:
 * Calculate a number of random numbers' Avg. and Std.Deviation.
 * And print the result.
 *
 * Arguments:
 * r: The range of random numbers.
 * n: The number of random numbers.
 *
 * Depend on: * randNum()
 *
 * Example:
 * randParam(10, 1000):
 *      Calculate 1000 random numbers' Avg. and Std.Deviation.
 *      The random number is between 0 and 10 which type is 'Number'.
 */
void randParam(int r, int n) {
    int i;
    double avg = 0.0, std = 0.0;

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        Number x = randNum(r);
        avg += x / (double)n;
        std += x*x / (double)n;
    }

    printf("aveage: %.3f\nStd.deviation: %.3f\n",
            avg, sqrt(std - avg*avg));
}
