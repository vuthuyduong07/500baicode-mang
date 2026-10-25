//Sort binary array in linear time

#include<stdio.h>

void sort (int a[], int n)
{
    int i, j, temp;
    for ( int i=0; i < n-1; i++) 
        for (int j= i+1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j]= temp;
            }
        
    }
}
int main (void) {
    int n;
    scanf ("%d", &n);
    int a[n];
    for (int i=0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    sort (a, n);
    for ( int i=0; i<n; i++) 
        printf ("%d ", a[i]);
    return 0;
}