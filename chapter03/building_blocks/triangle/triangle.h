/*
 * File: triangle.h
 * Note: Interface of 'triangle_t' Data Type.
 * Time: 2013-08-29 16:28
 */
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"


/* Data Type:
 * triangle_t */
typedef struct {
    point_t x;
    point_t y;
    point_t z;
} triangle_t;


/* Function getArea:
 * Compute the area of a triangle. */
Number getArea(triangle_t);


/* Function avgArea:
 * Generate n random triangles and compute the average area. */
Number avgArea(int n);


#endif
