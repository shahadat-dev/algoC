// Linear Search
// Time Complexity: O(n)
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
int linear_search(int A[], int n, int x)
{
    int i;

    for(i = 0; i < n; i++){
        if (A[i] == x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {50, 2, 14, 60, 11, 100};

    printf("%d\n", linear_search(arr, 6, 11));
    return 0;
}
