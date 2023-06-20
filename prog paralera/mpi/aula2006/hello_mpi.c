#include<stdio.h>
#include<mpi.h>

int main(int argc, char** argv)
{
    MPI_Init(&argc , &argv); //precisa inicializar

    int size;
    MPI_Comm_size( MPI_COMM_WORLD , &size);//definindo o nª

    int myrank;
    MPI_Comm_rank( MPI_COMM_WORLD , &myrank);

    char processor_name[MPI_MAX_PROCESSOR_NAME];//pega max
    int name_len;
    MPI_Get_processor_name( processor_name , &name_len);

    printf("hello word do processador %s, myrank %d saida de %d processos\n", processor_name, myrank, size);

    /*finaliza o ambiente mpi*/
    MPI_Finalize();
    
    return 0;
}