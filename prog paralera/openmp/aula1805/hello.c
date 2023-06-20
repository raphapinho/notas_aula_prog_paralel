#include "stdio.h"
#include "omp.h"


int main()
{    
    omp_set_num_threads(4);
    printf("Numero de threads fora da regiao paralela = %d\n", omp_get_num_threads());
    #pragma omp parallel
        {
        
        int id = omp_get_thread_num();
        int nthreads = omp_get_num_threads();
        printf("Bora programar em openMp??? %d de %d\n", id, nthreads);

        if(id == 0) {
            nthreads = omp_get_num_threads();
            printf("Numero de threads fora da regiao paralela = %d\n", nthreads);
        }
        }
}


//2 diretiva: dividir a carga de trabalho
