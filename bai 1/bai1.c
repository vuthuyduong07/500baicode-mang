//Find pair with given sum in the array

#include <stdio.h>

int find(int A[], int n, int B[], int t) {
    int c = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] + A[j] == t) {
                B[c] = A[i];
                B[c + 1] = A[j];
                c += 2;
            }
        }
    }
    return c;
}

int main(void) {
    int n, t;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *A = malloc((size_t)n * sizeof(int));
    int *B = malloc((size_t)n * n * sizeof(int));

    if (A == NULL || B == NULL) {
        free(A);
        free(B);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &t);

    int x = find(A, n, B, t);

    if (x == 0) {
        printf("Pair not found");
    } else {
        for (int i = 0; i < x; i += 2) {
            if (i > 0) {
                printf("or\n");
            }
            printf("Pair found (%d,%d)\n", B[i], B[i + 1]);
        }
    }

    free(A);
    free(B);
    return 0;
}