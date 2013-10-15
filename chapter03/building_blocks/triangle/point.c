/*
 * File: point.c
 * Note: Implementation of the functions declared in point.h
 * Time: 2013-08-26 21:24
 */
#include <math.h>
#include <stdio.h>
#include "rand.h"
#include "point.h"


/* Function trueValue:
 * Return a number's absolute value.
 *
 * Arguments:
 * n: a number of 'Number' type
 *
 * Return:
 * a number of 'Number' type
 *
 * Depend on:
 */
static Number trueValue(Number n) {

    return n > 0 ? n : -n;
}


/* Function getDistance:
 * Return two points' distance.
 *
 * Arguments:
 * a: A 'point_t' value.
 * b: A 'point_t' value.
 *
 * Return:
 * A 'Number' value.
 *
 * Depend on:
 * <math.h> sqrt();
 */
Number getDistance(point_t a, point_t b) {
    Number dx = trueValue(a.x - b.x),
          dy = trueValue(a.y - b.y);

    return sqrt(dx*dx + dy*dy);
}



/* Function getPoint:
 * Get n 'point_t' values from standard input, And fill an array with these values.
 *
 * Arguments:
 * arr: An array
 * n  : the size of arr.
 *
 * Return:
 * void
 *
 * Depend on:
 * <stdio.h> scanf();
 *
 */
void getPoint(point_t *arr, int n) {
    int i;

    for (i = 0; i < n; i++) {
        Number x, y;
        scanf("%lf,%lf", &x, &y);
        (arr+i)->x = x;
        (arr+i)->y = y;
    }
}


/* Function findClosestPoint:
 * Find the point in an array which is closest from the first array element.
 *
 * Arguments:
 * arr: An array.
 * n  : The size of the array.
 *
 * Return:
 * The index of the right point in the array.
 *
 * Depend on:
 */
int findClosestPoint(point_t *arr, int n) {
    int i, index = 1;
    Number min = getDistance(*(arr), *(arr+1));

    for (i = 2; i < n; i++) {
        Number dis = getDistance(*(arr), *(arr+i));
        if (dis < min) {
            min = dis;
            index = i;
        }
    }

    return index;
}


/* Function testCollinear:
 * Test three 'point_t' value whether is collinear.
 *
 * Arguments:
 * a: A 'point_t' value.
 * b: A 'point_t' value.
 * c: A 'point_t' value.
 *
 * Return:
 * 0: They are not collinear.
 * 1: They are collinear.
 *
 * Depend on:
 */
int testCollinear(point_t a, point_t b, point_t c) {
    int ab = (int)((a.x - b.x) / (a.y - b.y) * 10000),
        bc = (int)((b.x - c.x) / (b.y - c.y) * 10000);

    return ab == bc;
}


/* Function randPoint:
 * Return a random point_t value
 *
 * Arguments:
 * limit: limit the random numbers' range.
 *
 * Return:
 * A point_t value
 *
 * Depend on:
 * rand.h randNum();
 */
point_t randPoint(int limit) {
    point_t point;
    point.x = randNum(limit);
    point.y = randNum(limit);

    return point;
}
