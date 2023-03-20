/*5.	Write a program in C to print all unique elements in an array*/

#include <stdio.h>

int main() {
    int n, i, j, unique = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are: ");

    for (i = 0; i < n; i++) {
        unique = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }
        if (unique == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
