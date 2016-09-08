#ifndef COMMON_H
#define COMMON_H

/* common headers */
#include <stdio.h>
#include <stdlib.h>
/*#include <windows.h>*/
#include <time.h>

#define MAX_NUM 10

/* binary search in a sorted array */
int binsearch(int arr[], int len, int value);

void swap(void *a, void *b);

#endif