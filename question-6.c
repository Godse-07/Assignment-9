/*6.	Write a program in C to merge two arrays of same size sorted in decending order.*/

#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], merged_arr[2*n];

    printf("Enter elements of array 1 in descending order:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of array 2 in descending order:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < n && j < n) {
        if (arr1[i] >= arr2[j]) {
            merged_arr[k++] = arr1[i++];
        } else {
            merged_arr[k++] = arr2[j++];
        }
    }

    while (i < n) {
        merged_arr[k++] = arr1[i++];
    }

    while (j < n) {
        merged_arr[k++] = arr2[j++];
    }

    printf("Merged array in descending order is: ");

    for (i = 0; i < 2*n; i++) {
        printf("%d ", merged_arr[i]);
    }

    return 0;
}
