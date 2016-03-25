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
    quick_sort(nums, 0, MAX_NUM);
    for (i = 0; i < MAX_NUM; i++)
        printf("%d ", nums[i]);
	
	getchar();
    return 0;
}

void quick_sort(int arr[], int l, int r)
{
    if (l < r)  
    {
        int i = l;
        int j = r;
        int pivot = arr[l];  
        while (i < j)  
        {  
            while(i < j && arr[j] >= pivot) // 从右向左找第一个小于x的数  
                j--;    
            if(i < j)   
                arr[i++] = arr[j];  
              
            while(i < j && arr[i] < pivot) // 从左向右找第一个大于等于x的数  
                i++;    
            if(i < j)   
                arr[j--] = arr[i];  
        }  
        arr[i] = pivot;  
        quick_sort(arr, l, i - 1); // 递归调用   
        quick_sort(arr, i + 1, r);  
    } 
}