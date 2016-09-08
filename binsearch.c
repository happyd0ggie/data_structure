<<<<<<< HEAD
#include "bsearch.h"

int *bsearch(int *nums, int nums_size, int key)
{
	int *low = nums;
	int *high = nums + nums_size;
	int *mid;

	while (low < high)
=======
#include "binsearch.h"

int binsearch(int arr[], int len, int value)
{
	int low = 0;
	int high = len - 1;
	int mid;

	while (low <= high)
>>>>>>> 8b52c8d6bf85d37e829110598acf45bb2ab9cc19
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