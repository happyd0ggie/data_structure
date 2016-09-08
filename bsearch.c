#include "bsearch.h"

int *bsearch(int *nums, int nums_size, int key)
{
	int *low = nums;
	int *high = nums + nums_size;
	int *mid;

	while (low < high)
	{
		mid = low + ((high - low) >> 1);
		if (key < *mid)
		{
			high = mid;
		}
		else if (key > *mid)
		{
			low = mid + 1;
		}
		else
		{
			return mid;
		}
	}

	return NULL;
}