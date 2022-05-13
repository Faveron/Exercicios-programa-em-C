/******************************************************************************************/
/**                                                                                      **/
/**  EDDA2 - Estrutura de Dados - TADS - 1o. sem. 2022                                   **/
/**  Nome do aluno : Wesley Faveron de Almeida                                           **/
/**  Matricula : SP3082407  Curso : TECNOLOGIA EM ANÁLISE E DESENVOLVIMENTO DE SISTEMAS  **/
/**  Exercícios de ordenação                                                             **/
/**                                                                                      **/
/******************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAXVAL 500

void merge_sort (float *vetor, int inicio, int fim);
void merge (float *vetor, int inicio, int meio, int fim);

int main()
{
    float vetor_aleatorio[MAXVAL];
    int i;

    for(i = 0; i < MAXVAL; i++)
    {
        vetor_aleatorio[i] = rand()%(MAXVAL+2);
        printf("\t%.1f", vetor_aleatorio[i]);
    }
    merge_sort(vetor_aleatorio, 0, MAXVAL-1);
    printf("\n\n\n");
    for(i = 0; i < MAXVAL; i++)
    {
        printf("\t%.1f", vetor_aleatorio[i]);
    }

    return 0;
}

void merge_sort (float * vetor, int inicio, int fim)
{
  int  meio;
  if ( inicio < fim )
  {
    meio = (inicio + fim) / 2;/*calcula o meio                        */
    merge_sort (vetor, inicio, meio); /*ordena o subvetor esquerdo            */
    merge_sort (vetor, meio+1, fim ); /*ordena o subvetor direito             */
    merge(vetor, inicio, meio, fim); /*funde os subvetores esquerdo e direito*/
  }
}

void merge (float *vetor, int inicio, int meio, int fim)
{
  int tamEsq, tamDir, i, idxEsq, idxDir;
  float *vetor_Esq;
  float *vetor_Dir;
  tamEsq = meio - inicio + 1; /* tamanho do subvetor esquerdo */
  tamDir = fim  - meio;       /* tamanho do subvetor direito  */
  /* Tenta alocar tamEsq posições para abastecer o subvetor esquerdo */
  vetor_Esq = (float *) malloc (tamEsq * sizeof (float));
  if (vetor_Esq == NULL)
  { printf ("malloc devolveu NULL!\n");
    getch();
    /*exit (EXIT_FAILURE);*/
  }
  /* Tenta alocar tamDir posições para abastecer o subvetor direito */
  vetor_Dir = (float *) malloc (tamDir * sizeof (float));
  if (vetor_Dir == NULL)
  { printf ("malloc devolveu NULL!\n");
    getch();
    /*exit (EXIT_FAILURE);*/
  }
  for (i=0; i<tamEsq; i++)          /* inicializar vetor_Esq */
    vetor_Esq[i] = vetor[inicio+i]; /* elementos do subvetor esquerdo */
  for (i=0; i<tamDir; i++)          /* inicializar vetor_Dir */
    vetor_Dir[i] = vetor[meio+1+i]; /* elementos do subvetor direito */
  idxEsq = 0; /* índice do subvetor auxiliar esquerdo */
  idxDir = 0; /* índice do subvetor auxiliar direito  */
  for ( i=inicio; i<=fim; i++ )     /* intercala os vetores */
    if (idxEsq < tamEsq)
       if (idxDir < tamDir)
          if (vetor_Esq[idxEsq] < vetor_Dir[idxDir])
            vetor[i] = vetor_Esq[idxEsq++];
          else
	 vetor[i] = vetor_Dir[idxDir++];
       else
          vetor[i] = vetor_Esq[idxEsq++];
    else
       vetor[i] = vetor_Dir[idxDir++];
   free (vetor_Esq);
   free (vetor_Dir);
}
