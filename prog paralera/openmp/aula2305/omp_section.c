#include <stdlib.h>
#include <stdio.h>

#include<omp.h>

int main(int argc, char *argv[])
{
    int secao = 0;

#pragma omp parallel sections
{
#pragma omp section
{
    int id = omp_get_thread_num();
    secao++;
        printf("ordem de execução da sessao: %d, thread %d\n", secao, id);
} //fim do pragma section 1
#pragma omp section
{
    int id = omp_get_thread_num();
    secao++;
        printf("ordem de execução da sessao: %d, thread %d\n", secao, id);
} //fim do pragma section 2
} //fim do pragma omp parallel
}