/*
 * File: rand.h
 * Note: Interface
 * Time: 2013-08-24 20:39
 */

#ifndef RAND_H
#define RAND_H

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef int Number;

// Generate random number.
Number randNum(int limit);

// Calculate random numbers' average and std.deviation.
void calculate(int r, int n);

#endif
