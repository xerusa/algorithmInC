/*
 * File: point.h
 * Note: Interface for 'Point' data type.
 * Time: 2013-08-26 21:21
 */
#ifndef POINT_H
#define POINT_H

#include "rand.h"


/* Data Type:
 * point_t (Cartesian Coordinates) */
typedef struct {
    Number x;
    Number y;
} point_t;


/* Data Type:
 * point_polar (Polar Coordinates) */
typedef struct {
    Number angle;    // angle >= 0 && angle <= 2 * PI;
    Number length;
} point_polar;


/* Function getDistance:
 * Calculate the distance between two points. */
Number getDistance(point_t, point_t);


/* Function getPoint:
 * Read in point_t data from the standard input. */
void getPoint(point_t *arr, int n);


/* Function findClosestPoint:
 * Find the point in the arr that is closest to the first. */
int findClosestPoint(point_t *arr, int n);


/* Function testCollinear:
 * Test three points whether are collinear or not, within a numerical
 * tolerance of 10^(-4). */
int testCollinear(point_t a, point_t b, point_t c);


/* Function randPoint:
 * Return a random point_t value
 */
point_t randPoint(int);


#endif
