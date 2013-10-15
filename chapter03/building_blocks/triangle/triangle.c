/*
 * File: triangle.c
 * Note: Implementation of the functions declared in triangle.h.
 * Time: 2013-08-29 16:33
 */

#include <math.h>
#include "point.h"
#include "triangle.h"

/* Function getArea:
 * This function uses Heron's formula to compute the triangle's area.
 * Heron's formula:
 * p = (a + b + c) / 2;
 * s = sqrt(p * (p-a) * (p-b) * (p-c));
 *
 * Arguments:
 * n: A triangle_t type value.
 *
 * Return:
 * A 'Number' value
 *
 * Depend on:
 * getDistance();
 */
Number getArea(triangle_t n) {
    Number a = getDistance(n.x, n.y),
           b = getDistance(n.x, n.z),
           c = getDistance(n.y, n.z);
    Number p = (a + b + c) / 2,
           s = sqrt(p * (p-a) * (p-b) * (p-c));

    return s;
}


/* Function randTriangle:
 * Generage a random triangle_t.
 *
 * Arguments:
 * limit: limit the random numbers' range.
 *
 * Return:
 * A triangle_t type value.
 */
static triangle_t randTriangle(int limit) {
    triangle_t tri;

    while (1) {
        tri.x = randPoint(limit);
        tri.y = randPoint(limit);
        tri.z = randPoint(limit);

        if (!testCollinear(tri.x, tri.y, tri.z))
            return tri;
    };
}

/* Function avgArea */
Number avgArea(int n) {
    int i;
    Number avg;

    for (i = 0; i < n; i++)
        avg = getArea(randTriangle(1)) / n;

    return avg;
}
