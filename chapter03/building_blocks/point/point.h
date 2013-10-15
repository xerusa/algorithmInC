/*
 * File: point.h
 * Note: Interface for 'Point' data type.
 * Time: 2013-08-26 21:21
 */
#ifndef POINT_H
#define POINT_H

/* Data Type: point (Cartesian Coordinates) */
typedef struct {
    float x;
    float y;
} point;


/* Data Type: point_polar (Polar Coordinates) */
typedef struct {
    float angle;    // angle >= 0 && angle <= 2 * PI;
    float length;
} point_polar;


/* Function getDistance:
 * Calculate the distance between two points. */
float getDistance(point, point);


/* Function getPoint:
 * Read in point data from the standard input. */
void getPoint(point *arr, int n);


/* Function findClosestPoint:
 * Find the point in the arr that is closest to the first. */
int findClosestPoint(point *arr, int n);


/* Function testCollinear:
 * Test three points whether are collinear or not, within a numerical
 * tolerance of 10^(-4). */
int testCollinear(point a, point b, point c);


#endif
