#ifndef COMMON_H
#define COMMON_H

/* common headers */
#include <stdio.h>
#include <stdlib.h>
/*#include <windows.h>*/
#include <time.h>

#define MAX_NUM 100

/* function prototypes */
void quick_sort(int arr[], int left, int right);
void insert_sort(int arr[], int len);

/* binary search in a sorted array */
int binsearch(int arr[], int len, int value);

void swap(void *a, void *b);

#endif