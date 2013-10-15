/*
 * File: main.c
 * Note: Client program
 * Time: 2013-08-26 21:29
 */
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "point.h"

int main(int argc, char *argv[]) {
    int index, n = atoi(argv[1]);
    point *arr = malloc(sizeof(point) * n);
    assert(arr != NULL);

    getPoint(arr, n);
    index = findClosestPoint(arr, n);
    printf("The point is (%.2f, %.2f)\n", (arr+index)->x, (arr+index)->y);

    if (n >= 3 && testCollinear(*(arr), *(arr+1), *(arr+2)))
        printf("The first three points are collinear\n");

    return 0;
}
