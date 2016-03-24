#include "common.h"

int main()
{
    int i;
    int *nums = (int *)malloc(sizeof(int) * MAX_NUM);
    srand(time(0));
    for (i = 0; i < MAX_NUM; i++)
    {
        nums[i] = rand();
    }
    quicksort(nums, 0, MAX_NUM);
    for (i = 0; i < MAX_NUM; i++)
        printf("%d ", nums[i]);

	

	getchar();
    return 0;
}

int partition(int arr[], int left, int right)
{
    int i = left;
    int j = right;
    int pivot = arr[(left + right) / 2];  /* pick middle as pivot */
    int tmp;
    
    while (i <= j)
    {
        /* i scan from left to right */
        while (arr[i] < pivot)
            i++;
        /* j scan from right to left */
        while (arr[j] > pivot)
            j--;
        /* found the one that greater than pivot or less than pivot, swap */
        if (i <= j)
        {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }

    return i;
}

void quicksort(int arr[], int left, int right)
{
    int idx = partition(arr, left, right);
    if (left < idx - 1)
        quicksort(arr, left, idx - 1);
    if (right > idx)
        quicksort(arr, idx, right);
}