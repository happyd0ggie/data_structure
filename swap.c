#include "common.h"

void swap(void *a, void *b)
{
	int t = *(int *)a;
	*(int *)a = *(int *)b;
	*(int *)b = t;
}