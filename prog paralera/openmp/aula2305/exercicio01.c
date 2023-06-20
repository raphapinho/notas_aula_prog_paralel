#include <stdio.h>
#include <stdlib.h>

#include <omp.h>
#define N 10

int somatorio(int vetor[])
{
    int cont, somatorio, mult=1;
    //Somando os valores do vetor
    for (cont=0;cont<N;cont++) {
    somatorio = somatorio + vetor[cont];
    mult = mult * vetor[cont];
    }
    return somatorio;

}

int main(int argc, char *argv[]) {

    //declaração de variaveis
    int vetor1[N], vetor2[N], cont, somatorio, subtraeVetor, soma, sub;

    for (cont=0; cont<N; cont++){
        vetor1[cont] += cont+1;
    }

    for (cont=0; cont<N; cont++){
        vetor2[cont] += cont+11;
    }

    //Somando os valores do vetor
    for (cont=0;cont<N;cont++) {
        soma =  vetor1[cont] + vetor2[cont];
        somatorio +=  vetor1[cont] + vetor2[cont];
            printf("a soma de %d + %d = %d\n", vetor1[cont], vetor2[cont], soma);
    }

    //subtraindo os valores do vetor
    
    for (cont=0;cont<N;cont++) {
    sub =  vetor1[cont] - vetor2[cont];
    subtraeVetor -=  vetor1[cont] - vetor2[cont];
    
        printf("a subtração de %d + %d = %d\n", vetor1[cont], vetor2[cont], sub);
    
    }
    
    //imprimindo a soma e subtração entre vetores produto
    printf("O somatorio é = %d\n", somatorio);
    printf("A subtração é = %d\n", subtraeVetor);
    return 0;
}