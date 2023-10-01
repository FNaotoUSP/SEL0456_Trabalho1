#include <stdio.h>
#include "funcoes.h"

void soma1 (double a[], int n){
    for (int i=0; i<n; i++){
        a[i] = a[i]+1;
    }
    for (int i=0; i<n; i++){
        printf("%f ", a[i]);
    }
    printf("\n");
}

