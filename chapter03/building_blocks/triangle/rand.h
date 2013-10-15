/*
 * File: rand.h
 * Note: Interface
 * Time: 2013-08-24 20:39
 */

#ifndef RAND_H
#define RAND_H


typedef double Number;


/* Function randNum:
 * Generate random number.
 */
Number randNum(int range);


/* Function randParam:
 * Calculate a number of random numbers' Avg. and Std.Deviation.
 */
void randParam(int r, int n);

#endif
