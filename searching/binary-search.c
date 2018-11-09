// Binary Search

// Time Complexity: O(log n)
// Ex:
// 2^10 = 1024 i.e, log(1024) = 10, it will take only 10 loop to find a element in 1024 element array
// 2^32 = 4294967296 i.e, log(4294967296) = 32, it will take only 32 loop to find a element in 4294967296 element array

// Space Complexity: O(1)

#include <stdio.h>

/*
* DESC:     Search an element into an array.
*
* PARARMS:  int A[] :   Array
*           int n   :   Length of array
*           int x   :   Number to find
*
* RETURN:   Type    :   int
*           Value   :   index of element, -1 if not found.
*/
int binary_search(int A[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while(left <= right){
        mid = (left + right) / 2;

        if(A[mid] == x){
            return mid;
        }
        if(A[mid] < x){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 4, 5, 8, 11, 12, 20, 23, 25, 30};

    printf("%d\n", binary_search(arr, 10, 23));
    return 0;
}

