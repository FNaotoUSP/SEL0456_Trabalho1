#include <stdio.h>
#include "funcoes.h"

void multp2 (double a[], int n){
    for (int i=0; i<n; i++){
        a[i] = a[i]*2;
    }
    for (int i=0; i<n; i++){
        printf("%f ", a[i]);
    }
    printf("\n");
}
