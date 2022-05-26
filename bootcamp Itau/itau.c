#include <stdio.h>
/*
0 - Preto
1 - Azul
2 - Verde
3 - Verde-agua
4 - Vermelho
5 - Roxo
6 - Amarelo
7 - Branco
8 - Cinza
9 - Azul claro
A - Verde Claro
B - Verde-agua claro
C - Vermelho Claro
D - Lilas
E - Amarelo Claro
F - Branco Brilhante
*/
void logo_bootcamp();
void ano_1993();
void ano_2010();
void ano_2013();
void ano_2014();

int main()
{
    int ano;
    system("mode 100, 20");
    system("color 0F");

    logo_bootcamp();
    printf("\n\t\t\tApresentacao de Wesley Faveron de Almeida\n");

    getchar();
    system("cls");
    printf("\n\tAno: ");
    fflush(stdin); scanf("%d", &ano);

    while (ano != 0)
    {
        switch (ano)
        {
            case 1993 :
                ano_1993();
                break;
            case 2010 :
                ano_2010();
                break;
            case 2013 :
                ano_2013();
                break;
            case 2014 :
                ano_2014();
                break;
            default  :
                system("cls");
        }
        printf("\n\n");
        system("pause");
        system("mode 100, 20");
        system("color 0F");
        system("cls");
        printf("\n\tAno: ");
        fflush(stdin); scanf("%d", &ano);
    }
    return 0;
}

void logo_bootcamp()
{
    printf("\t$$                                                                               \n");
    printf("\t$$                                                                               \n");
    printf("\t$$         $$$$$      $$$$$      $     $$$$$  $$$$$     $$  $$      $$$$$        \n");
    printf("\t$$$$$$$   $$   $$    $$   $$   $$$$$  $$$         $   $$  $$  $$  $$$    $$      \n");
    printf("\t$$   $$  $$     $$  $$     $$    $    $       $$$$$   $$  $$  $$  $$      $$     \n");
    printf("\t$$   $$   $$   $$    $$   $$     $$   $$$     $   $   $$  $$  $$  $$$    $$      \n");
    printf("\t$$$$$$$    $$$$$      $$$$$      $$$   $$$$$  $$$$$$  $$  $$  $$  $$$$$$$   $$$$$\n");
    printf("\t                                                                  $$             \n");
    printf("\t                                                                  $$             \n");
    printf("\t                     $$     $$      $$                               $$          \n");
    printf("\t                    $$     $        $$                                 $         \n");
    printf("\t$$   $   $$$$   $$    $$   $     $$$$$    $$$$$   $$       $$   $$$    $         \n");
    printf("\t$$  $$$     $   $$    $$  $$    $$  $$   $$   $$   $$     $$   $       $$        \n");
    printf("\t$$   $   $$$$   $$    $$   $    $$  $$  $$$$$$$     $$   $$      $     $         \n");
    printf("\t$$   $   $  $    $$  $$    $    $$  $$   $$          $$ $$        $    $         \n");
    printf("\t$$   $$  $$$$$    $$$$     $     $$$$$    $$$$$       $$       $$$     $         \n");
    printf("\t                            $$                                       $$          \n");
}

void ano_1993()
{
    system("cls");
    system("mode 90, 16");
    system("color F0");
    printf("\n\n\n");
    printf("\t\t\t     @     @@@@@  @@@@@   @@@@@  \n");
    printf("\t\t\t   @ @     @   @  @   @      @@  \n");
    printf("\t\t\t     @     @@@@@  @@@@@    @@@@  \n");
    printf("\t\t\t     @         @      @      @@  \n");
    printf("\t\t\t   @@@@@   @@@@@  @@@@@   @@@@@  \n");
    printf("\n\n\tNome: Wesley Faveron de Almeida");
    printf("\n\tIdade: 29 anos");
    printf("\n\tCidade: Sao Paulo - SP");
    printf("\n\tNacionalidade: Brasileiro");
    printf("\n\tFormacao: Licenciatura em Matematica - IME USP (completo)");
    printf("\n\t          Analise e Desenvolvimento de Sistemas - IFSP (cursando)");
}

void ano_2010()
{
    system("cls");
    system("mode 90, 14");
    system("color B0");
    printf("\n\n\n");
    printf("\t    @@@@  @@@@@    @    @@@@@            @@@@  @@@@@    @    @@@@    \n");
    printf("\t   @   @  @   @  @ @    @   @           @   @  @   @  @ @   @   @    \n");
    printf("\t      @@  @   @    @    @   @    @@@       @@  @   @    @      @@    \n");
    printf("\t     @@   @   @    @    @   @             @@   @   @    @     @@     \n");
    printf("\t   @@@@@  @@@@@  @@@@@  @@@@@           @@@@@  @@@@@  @@@@@ @@@@@    \n");
    printf("\n\n\t2010: Conclusao do Ensino Medio");
    printf("\n\t2011 e 2012: Vestibular");
    printf("\n\tRumo: Matematica/exatas");
    printf("\n\tUFSCar: Bachalelado em Matematica");
}

void ano_2013()
{

}

void ano_2014()
{

}
