//Find the maximum product of two integers in an array

#include<stdio.h>

void sort(int A[], int n){ //sap xep chen
    for(int i= 1; i<n; i++){
        int x=A[i];
        int j=i-1;
        while(j>=0 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main(){
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        return 1;
    }

    int A[n];
    for(int i=0; i<n; i++){
        if (scanf("%d", &A[i]) != 1) {
            return 1;
        }
    }

    sort(A, n);
    long long minProduct = (long long)A[0] * A[1];
    long long maxProduct = (long long)A[n - 2] * A[n - 1];

    if (minProduct > maxProduct) {
        printf("(%d,%d)", A[0], A[1]);
    } else if (minProduct < maxProduct) {
        printf("(%d,%d)", A[n - 2], A[n - 1]);
    } else {
        printf("(%d,%d) or (%d,%d)",A[0],A[1],A[n-2],A[n-1]);
    }
    return 0;
}