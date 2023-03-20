/*3.	Write a program in C to copy the elements of one array into another array.*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements of array 1:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Elements in array 1 are: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nElements in array 2 are: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
