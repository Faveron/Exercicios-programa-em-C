#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int base, expoente, potencia, contador;

    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);
    potencia = 1;
    for(contador = 0; contador <= expoente; contador++)
    {
        printf("%d ^ %d = %d\n", base, contador, potencia);
        potencia = potencia * base;
    }
}
