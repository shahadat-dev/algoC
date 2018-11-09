// Selection Sort

// Time Complexity: O(n^2) - Exponential Complexity
// Ex:
// 2^10 = 1024 i.e, log(1024) = 10, it will take only 10 loop to find a element in 1024 element array
// 2^32 = 4294967296 i.e, log(4294967296) = 32, it will take only 32 loop to find a element in 4294967296 element array

// Space Complexity: O(1)

#include <stdio.h>

/*
* DESC:     Sort an array using Selection sort algorithm.
*
* PARARMS:  int arr[] :   Unsorted Array
*           int n   :   Length of array
*
*
* RETURN:   Type    :   void
*
*/
void selection_sort(int arr[], int n)
{
    int i, j, min_index, temp;

    for(i = 0; i < n-1; i++){
        min_index = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int main()
{
    int arr[] = {3, 44, 38, 5, 15, 26, 27, 2, 46, 4};
    int n = 10;

    selection_sort(arr, n);

    // Print sorted array
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
