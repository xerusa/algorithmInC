/*
 * File: point.c
 * Note: Implementation of the functions declared in point.h
 * Time: 2013-08-26 21:24
 */
#include <math.h>
#include <stdio.h>
#include "point.h"

/* Function trueValue:
 * Get the absolute value of a number. */
static float trueValue(float n) {

    return n > 0 ? n : -n;
}


float getDistance(point a, point b) {
    float dx = trueValue(a.x - b.x),
          dy = trueValue(a.y - b.y);

    return sqrt(dx*dx + dy*dy);
}


void getPoint(point *arr, int n) {
    int i;

    for (i = 0; i < n; i++) {
        float x, y;
        scanf("%f,%f", &x, &y);
        (arr+i)->x = x;
        (arr+i)->y = y;
    }
}


int findClosestPoint(point *arr, int n) {
    int i, index = 1;
    float min = getDistance(*(arr), *(arr+1));

    for (i = 2; i < n; i++) {
        float dis = getDistance(*(arr), *(arr+i));
        if (dis < min) {
            min = dis;
            index = i;
        }
    }

    return index;
}


int testCollinear(point a, point b, point c) {
    int ab = (int)((a.x - b.x) / (a.y - b.y) * 10000),
        bc = (int)((b.x - c.x) / (b.y - c.y) * 10000);

    return ab == bc;
}
