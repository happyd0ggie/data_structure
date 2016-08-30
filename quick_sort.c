#include "quick_sort.h"

void quick_sort(int *nums, int left, int right)
{
	if (left < right)
	{
		int key = nums[left];  /* 选择第一个作为待比较的key */
		int low = left;
		int high = right;

		while (low < high)
		{
			/* 从右向左扫描找到第一个小于key的位置 */
			while (low < high && nums[high] > key)
			{
				high--;
			}
			nums[low] = nums[high];
			/* 从左向右扫描找到第一个大于key的位置 */
			while (low < high && nums[low] < key)
			{
				low++;
			}
			nums[high] = nums[low];
		}
		nums[low] = key;  /* key入位 */
		quick_sort(nums, left, low - 1);  /* 递归排序左边 */
		quick_sort(nums, low + 1, right);  /* 递归排序右边 */
	}
}