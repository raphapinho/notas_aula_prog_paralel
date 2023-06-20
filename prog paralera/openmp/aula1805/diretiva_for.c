#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#define N 20

int main(int argc, char *argv[])
{
    int i, n;
    float a[N], b[N], c[N];

    //inicializa vetor
    for (size_t i = 0; i < N; i++)
    {
        a[i] = b[i] = i * 1.0;
        n = N;
    }

    #pragma omp parallel num_threads(4)
    {
        int id = omp_get_thread_num();
        #pragma omp for
        for (size_t i = 0; i < n; i++)
        {
            c[i] = a[i] + b[i];
            printf("threa %d executa a iteração %d do loop\n", id, i);
        }
    }
    return 0;
    
}

//pragma omp sections: não é escalavel, depende exclusivamente da seção gerada