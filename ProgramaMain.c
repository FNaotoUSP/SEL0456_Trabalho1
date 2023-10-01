#include <stdio.h>
#define tamanhoVetor 10  //tamanho do array

#include "funcoes.h"

int main(){
    double array[tamanhoVetor]={0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};

    multp2(array, tamanhoVetor);
    soma1(array, tamanhoVetor);
    soma2_3(array, tamanhoVetor);

    return 0;
}
