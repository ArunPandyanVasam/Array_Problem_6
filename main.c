#include <stdio.h>
#define SIZE 100

int main(void) {
    // Write a program in C to print all unique elements in an array.
    int n;
    int arr[SIZE];
    int uniqueElements[SIZE];
    printf("Print all unique elements of an array: \n");
    printf("------------------------------------------ \n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);

    for (int i = 0; i < n; ++i) {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are: ");
    for (int i = 0; i < n; ++i) {
        int ctr = 0;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                if (arr[i] == arr[j]) {
                    ctr++;
                }
            }
        }
        if (ctr == 0) {
            printf("%d ", arr[i]);
        }
    }


    return 0;
}
