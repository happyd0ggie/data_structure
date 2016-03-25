#include "common.h"

int main(int argc, char const *argv[])
{
	int arr[] = {2, 8, 7, 1, 3, 5, 6};
    printf("Before sorting...\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nAfter sorting...\n");
	insert_sort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

	return 0;
}

void insert_sort(int arr[], int len)
{
	int i = 0;
    int j;
    int k;
    int tmp;
	
	while (i < len - 1)
    {
        j = 0;
        k = i + 1;
        tmp = arr[k];
        
        while (j <= i && tmp > arr[j])
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
            arr[k] = arr[k - 1];
            k--;
        }
        arr[k] = tmp;
        i++;
    }

    return;
}