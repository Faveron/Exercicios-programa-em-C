/******************************************************************************************/
/**                                                                                      **/
/**  EDDA2 - Estrutura de Dados - TADS - 1o. sem. 2022                                   **/
/**  Nome do aluno : Wesley Faveron de Almeida                                           **/
/**  Matricula : SP3082407  Curso : TECNOLOGIA EM ANÁLISE E DESENVOLVIMENTO DE SISTEMAS  **/
/**  Exercícios de ordenação                                                             **/
/**                                                                                      **/
/******************************************************************************************/

#include <stdio.h>
#include <locale.h>

#define TAMMAXVET 10
#define MAXVAL 100

void bubble_sort(double *vetor);
void selection_sort(double *vetor);
void insertion_sort(double *vetor);
void imprimi_vetor(double *vetor);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    double vetorValoresAleatorios[TAMMAXVET];
    char codigo;

    printf("O programa a seguir ordena %d valores aleatórios\n", TAMMAXVET);
    printf("\nTecle uma tecla para gerar os %d valores\n", TAMMAXVET);
    getch();

    printf("\nOs valores gerados são: \n\n");
    for(i = 0; i < TAMMAXVET; i++)
        vetorValoresAleatorios[i] = rand()%(MAXVAL + 1);
    imprimi_vetor(vetorValoresAleatorios);

    printf("Escolha a forma que deseja que seja utilizada para ordenar esse valores\n");
    printf("\t b - Bubble sort\n"
           "\t s - Selection sort\n"
           "\t i - Insertion sort\n");
    printf("Código: ");fflush(stdin); codigo = getchar();

    switch (codigo)
    {
        case 'b' :
            bubble_sort(vetorValoresAleatorios);
            printf("\nValores depois da ordenação por BUBBLE SORT: \n\n");
            imprimi_vetor(vetorValoresAleatorios);
            break;
        case 's' :
            selection_sort(vetorValoresAleatorios);
            printf("\nValores depois da ordenação por SELECTION SORT: \n\n");
            imprimi_vetor(vetorValoresAleatorios);
            break;
        case 'i' :
            insertion_sort(vetorValoresAleatorios);
            printf("\nValores depois da ordenação por INSERTION SORT: \n\n");
            imprimi_vetor(vetorValoresAleatorios);
            break;
        default  :
            printf("\nCódigo ( %c )inválido.\n", codigo);
    }
    return 0;
}

void bubble_sort(double *vetor)
{
    int i, j;
    double aux;
    for ( j = 0; j < TAMMAXVET - 1; j++)
    {
        for ( i = 0; i < TAMMAXVET - 1 - j; i++)
        {
            if ( vetor[i] > vetor[i+1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}

void selection_sort(double *vetor)
{
    int pos_min, i, j;
    float aux;
    for(i=0; i < TAMMAXVET - 1; i++)
    {
        pos_min = i;
        for (j = i + 1; j < TAMMAXVET; j++)
        {
            if (vetor[j] < vetor[pos_min])
                pos_min = j;
        }
        if (pos_min != i)
        {
            aux = vetor[i];
            vetor[i] = vetor[pos_min];
            vetor[pos_min] = aux;
        }
    }
}

void insertion_sort(double *vetor)
{
    double escolhido;
    int   anterior, i;
    for (i = 1; i < TAMMAXVET; i++)
    {
        escolhido = vetor[i];
        anterior  = i - 1;
        while ( (anterior >= 0) && (vetor[anterior] > escolhido) )
        {
            vetor[anterior + 1] = vetor[anterior];
            anterior--;
        }
        vetor[anterior + 1] = escolhido;
    }
}

void imprimi_vetor(double *vetor)
{
    int i;
    for(i = 0; i < TAMMAXVET; i++)
        printf("%.1f  ", vetor[i]);
    printf("\n\n");
}
