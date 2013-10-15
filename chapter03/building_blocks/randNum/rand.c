/*
 * File: rand.c
 * Note: Implementation of the functions declared in rand.h.
 * Time: 2013-08-24 20:43
 */
#include "rand.h"

Number randNum(int limit)
{
    if (sizeof(Number) == sizeof(double))
        return rand() / (Number)RAND_MAX * limit;
    else if (limit == 0)
        return rand() >= RAND_MAX/2;
    else
        return rand() % limit;
}

void calculate(int r, int n)
{
    int i;
    double ave = 0.0, dev = 0.0;

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        Number x = randNum(r);
        ave += x / (double)n;
        dev += x*x / (double)n;
    }

    printf("aveage: %.3f\nStd.deviation: %.3f\n",
            ave, sqrt(dev - ave*ave));
}
