#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3, mmc, i;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);
    mmc = 1;
    i = 2;
    printf("\n\t%d,\t%d,\t%d,\t", n1, n2, n3);
    while( n1 != 1 || n2 != 1 || n3 != 1)
    {
        if(n1%i == 0 || n2%i == 0 || n3%i == 0)
        {
            if(n1%i == 0)
                n1 = n1/i;
            if(n2%i == 0)
                n2 = n2/i;
            if(n3%i == 0)
                n3 = n3/i;
            printf("|%d\n\t%d,\t%d,\t%d,\t",i, n1, n2, n3);
            mmc = mmc * i;
        }
        else
            i++;
    }
    printf("|______________\n\t\t\t\t  MMC = %d\n", mmc);
}
