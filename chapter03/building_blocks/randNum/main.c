/*
 * File: main.c
 * Note: Exercise 3.2, Exercise 3.3, Exercise 3.4, Exercise 3.5
 *       Test the random-number generator on the system.
 * Time: 2013-08-23 20:43
 */
#include "rand.h"

int main(void)
{
    calculate(10, 1000);
    calculate(10, 10000);
    calculate(10, 100000);
    calculate(10, 1000000);

    calculate(100, 1000);
    calculate(100, 10000);
    calculate(100, 100000);
    calculate(100, 1000000);

    calculate(1000, 1000);
    calculate(1000, 10000);
    calculate(1000, 100000);
    calculate(1000, 1000000);

    calculate(2, 1000);
    calculate(2, 10000);
    calculate(2, 100000);
    calculate(2, 1000000);

    calculate(4, 1000);
    calculate(4, 10000);
    calculate(4, 100000);
    calculate(4, 1000000);

    calculate(16, 1000);
    calculate(16, 10000);
    calculate(16, 100000);
    calculate(16, 1000000);

    calculate(0, 1000);
    calculate(0, 10000);
    calculate(0, 100000);
    calculate(0, 1000000);

    return 0;
}
