#include "common.h"

int main(int argc, char const *argv[])
{
	int arr[] = {1, 3, 9, 10, 23, 34, 58};
	printf("%d\n", binsearch(arr, 7, 23));

	return 0;
}

int binsearch(int arr[], int len, int value)
{
	int low = 0;
	int high = len - 1;
	int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == value)
		{
			return mid;
		}
		else if (arr[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return -1;
}