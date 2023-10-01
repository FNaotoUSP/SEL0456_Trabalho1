#include <stdio.h>
#define tamanhoVetor 10  //tamanho do array

void multp2 (double a[], int n){
    for (int i=0; i<n; i++){
        a[i] = a[i]*2;
    }
    for (int i=0; i<n; i++){
        printf("%f ", a[i]);
    }
    printf("\n");
}
void soma1 (double a[], int n){
    for (int i=0; i<n; i++){
        a[i] = a[i]+1;
    }
    for (int i=0; i<n; i++){
        printf("%f ", a[i]);
    }
    printf("\n");
}
void soma2_3 (double a[], int n){
    for (int i=0; i<n; i++){
        a[i] = a[i]+2.3;
    }
    for (int i=0; i<n; i++){
        printf("%f ", a[i]);
    }
    printf("\n");
}
 //////////

int main(){
    double array[tamanhoVetor]={0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};

    multp2(array, tamanhoVetor);
    soma1(array, tamanhoVetor);
    soma2_3(array, tamanhoVetor);

    return 0;
}
