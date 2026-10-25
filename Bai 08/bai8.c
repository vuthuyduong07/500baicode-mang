//Find the odd occurring element in an array in a single traversal

#include <stdio.h>

int finding(int arr[], int n) {
    int result = 0; 
    for (int i = 0; i < n; i++) {
        result = result ^ arr[i]; 
    }

    return result; 
}

int main() {
    int arr[] = { 4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("arr[] = [ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" ]\n");
    int odd_element = finding(arr, n);
    printf("%d\n", odd_element);

    return 0;
}