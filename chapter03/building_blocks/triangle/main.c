/*
 * File: main.c
 * Note:
 * Time: 2013-08-31 17:24
 */
#include <stdio.h>
#include <stdlib.h>
#include "rand.h"
#include "point.h"
#include "triangle.h"

int main(int argc, char *argv[])
{
    int n = 100;
    if (argc >= 2)
        n = atoi(argv[1]);

    printf("%d triangles' average area is %lf\n", n, avgArea(n));

    return 0;
}
