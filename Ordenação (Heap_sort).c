#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAXVAL 500

int esquerdo(int i);
int pai(int i);
int direito(int i);
void troca(float *A, float *B);
void BuildHeap(float *vetor);
void heap_sort(float *vetor);

int main()
{
    float vetor_aleatorio[MAXVAL];
    int i;

    for(i = 0; i < MAXVAL; i++)
    {
        vetor_aleatorio[i] = rand()%(MAXVAL+2);
        printf("\t%.1f", vetor_aleatorio[i]);
    }

    BuildHeap(vetor_aleatorio);
    heap_sort(vetor_aleatorio);
    printf("\n\n\n");

    for(i = 0; i < MAXVAL; i++)
    {
        printf("\t%.1f", vetor_aleatorio[i]);
    }

    return 0;
}

int esquerdo(int i)
{
  return (2*i+1);
}

int pai(int i)
{
  return ( (i-1)/2 );
}

int direito(int i)
{
  return (2*i+2);
}

void troca(float *A, float *B)
{
  float aux = *A;
  *A = *B;
  *B = aux;
}

void BuildHeap(float *vetor)
{
   int i, atual;
   /* percorre todo o vetor a partir do segundo elemento    */
   /* pois o primeiro é a raiz do heap e antes dele nada  há*/
   for(i=1; i<MAXVAL; i++)
   {
      atual = i;
      /* enquanto o atual for maior que o pai...*/
      while(atual > 0 && vetor[atual] > vetor[pai(atual)])
      {
           /*...troca o atual com o pai... */
           troca(  &vetor[atual], &vetor[pai(atual)] );
           /*...e o atual passa a ser o pai */
           atual = pai(atual);
      }
   }
}

void heap_sort(float *vetor)
{
    int i, atual;

    for(i=MAXVAL-1; i>0; i--)   /* percorre da última até a penúltima posição do vetor */
    {   /* (se todas as posições até a penúltima estiverem ordenadas, a última também estará) */
        troca(  &vetor[0], &vetor[i]  );       /* troca a posição corrente do heap com a raiz */

        /* i não pertence mais ao vetor */
        /* (o vetor vai diminuindo de tamanho, pois a última posição CERTAMENTE terá o maior valor) */

        /* ajusta o heap */
        atual = 0;
        while ( direito(atual) <= (i-1)                                       /* Enquanto tiver 2 filhos                                  */
                    &&                                                                   /* E                                                                    */
                   ( vetor[atual] < vetor[esquerdo(atual)]  ||         /* o pai for menor que um dos dois filhos...     */
                     vetor[atual] < vetor[direito(atual)] ) )
        {   /*...troca o pai com o maior dos filhos */
            if ( vetor[esquerdo(atual)] > vetor[direito(atual)] )
            {
               troca(  &vetor[atual], &vetor[esquerdo(atual)]  ); /*troca o atual com o filho esquerdo*/
               atual = esquerdo(atual);
            }
            else
            {
                troca(  &vetor[atual], &vetor[direito(atual)]  ); /*troca o atual com o filho direito*/
                atual = direito(atual);
            }
        }
        /* Verificar se sobrou um filho (esquerdo) maior que o atual */
        if ( esquerdo(atual) <= i-1 && vetor[atual] < vetor[esquerdo(atual)] )
        {
            troca(  &vetor[atual], &vetor[esquerdo(atual)]  ); /*troca o atual com o filho esquerdo*/
            atual = esquerdo(atual);
        }
    }
}
