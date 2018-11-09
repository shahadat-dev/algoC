/*
* Bubble Sort
*
* Time Complexity: O(n^2) - Exponential Complexity
*
* Space Complexity: O(1)
*/

#include <stdio.h>

/*
* DESC:     Sort an array using Bubble sort algorithm.
*
* PARARMS:  int arr[]   :   Unsorted Array
*           int n       :   Length of array
*
*
* RETURN:   Type        :   void
*
*/
void bubble_sort(int A[], int n)
{
    int i, j, temp;

    for(i = 0; i < n; i++){
        for(j = 0; j < n-1 -i; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2};
    int n = 10;

    bubble_sort(arr, n);

    // Print sorted array
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
