#include <stdio.h>
/*
0 - Preto
1 - Azul
2 - Verde
3 - Verde-água
4 - Vermelho
5 - Roxo
6 - Amarelo
7 - Branco
8 - Cinza
9 - Azul claro
A - Verde Claro
B - Verde-água claro
C - Vermelho Claro
D - Lilás
E - Amarelo Claro
F - Branco Brilhante
*/
int main()
{
    char codigo;
    fflush(stdin); codigo = getchar();

    while (codigo != 'f')
    {
        switch (codigo)
        {
            case 'a' :
                system("cls");
                system("color A0");
                /*mode numero de colunas, numero de linhas*/
                system("mode 50, 2");
                printf("Ola Mundo");
                break;
            case 'b' :
                system("cls");
                system("color 2E");
                system("mode 60, 3");
                printf("Ola Mundo");
                break;
            case 'c' :
                system("cls");
                system("color 3D");
                system("mode 70, 4");
                printf("Ola Mundo");
                break;
            case 'd' :
                system("cls");
                system("color 4C");
                system("mode 80, 5");
                printf("Ola Mundo");
                break;
            default  :
                printf("\nCódigo ( %c )inválido.\n", codigo);
        }
        printf("\n");
        fflush(stdin); codigo = getchar();
    }
    return 0;
}
