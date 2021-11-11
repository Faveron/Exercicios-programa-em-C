#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int n, contador, x1, x2, aux;

    printf("Digite a quantidade de termos da sequencia de Fibonacci:  ");
    scanf("%d", &n);
    contador = x1 = x2 = 1;
    printf("%d\n%d\n", x1, x2);
    do
    {
        aux = x1 + x2;
        printf("%d\n", aux);
        x1 = x2;
        x2 = aux;
        contador ++;
    }while (contador < n-1);
}
