#include "insert_sort.h"

void insert_sort(int *nums, int nums_size)
{
	int i = 0;
	int j;
	int k;
	int tmp;

	while (i < nums_size - 1)
	{
		j = 0;
		k = i + 1;
		tmp = nums[k];

		while (j <= i && tmp > nums[j])
		{
			j++;
		}
		if (j > i)
		{
			i++;
			continue;
		}
		while (k > j)
		{
			nums[k] = nums[k - 1];
			k--;
		}
		nums[k] = tmp;
		i++;
	}

	return;
}