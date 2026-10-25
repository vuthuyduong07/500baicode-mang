// Inplace merge two sorted arrays

#include <stdio.h>

void merge (int X[], int Y[], int m, int n){
    int temp;
    for (int i=0; i<m; i++) {
        if (X[i]>Y[0]) {
            temp = X[i];
            X[i]=Y[0];
            Y[0]=temp;
            int first =Y[0];
            int k;
            for (k=1; k<n && Y[k] < first; k++) {
                Y[k-1] = Y[k];
            }
            Y[k-1]=first;
        }
    }
}

int main(){
    int m; 
    int n; 
    scanf("%d %d", &m, &n);
    int X[m]; 
    int Y[n];
    
    for (int i=0; i< m; i++) {
        scanf("%d", &X[i]);
    }
    for (int j=0; j<n; j++) {
        scanf("%d", &Y[j]);
    }
    merge(X, Y, m, n);
    for (int i=0; i< m; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");
    for (int i=0; i< n; i++) {
        printf("%d ", Y[i]);
    }
    
    return 0;
}