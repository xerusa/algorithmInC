/*
 * File: largest_number.c
 * Note: Find the largest number than we can represent with types int.
 * Time: 2013-08-23 20:36
 */
#include <stdio.h>

int main(void)
{
    int i = 0;

    while (++i >= 0);
    printf("%d\n", --i); // 2147483647

    return 0;
}
