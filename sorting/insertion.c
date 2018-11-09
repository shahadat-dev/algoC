/*
* Insertion Sort
*
* Time Complexity   : O(n^2) - Exponential Complexity
*
* Best case O(n)    : If n < 100 and array is about to sorted
*                     (at least half of the elements are sorted)
* Worst case O(n^2) : If array is reverse sorted
*
* Space Complexity  : O(1)
*/

#include <stdio.h>

/*
* DESC:     Sort an array using Insertion sort algorithm.
*
* PARARMS:  int arr[]   :   Unsorted Array
*           int n       :   Length of array
*
*
* RETURN:   Type        :   void
*
*/
void insertion_sort(int A[], int n)
{
    int i, j, item;

    for(i = 1; i < n; i++){
        item = A[i];

        j = i - 1;
        while(j >= 0 && A[j] > item){
            A[j+1] = A[j];
            j = j - 1;
        }

        A[j+1] = item;
    }
}

int main()
{
    int arr1[] = {3, 44, 38, 5, 15, 26, 27, 2, 46, 4};
    int arr2[] = {5, 4, 3, 2, 1};
    int n1 = 10, n2 = 5, i;

    insertion_sort(arr1, n1);
    insertion_sort(arr2, n2);

    // Print sorted array
    for(i = 0; i < n1; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");

     // Print sorted array
    for(i = 0; i < n2; i++){
        printf("%d ", arr2[i]);
    }

    return 0;
}
