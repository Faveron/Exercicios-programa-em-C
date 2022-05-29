#include <stdio.h>
#include <locale.h>
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
void ano_2018();
void ano_2021();
void encerramento();

int main()
{
    setlocale(LC_ALL, "");
    int ano;
    system("mode 100, 20");
    system("color 0F");

    logo_bootcamp();
    printf("\n\t\t\tApresentação de Wesley Faveron de Almeida\n");

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
            case 2018 :
                ano_2018();
                break;
            case 2021 :
                ano_2021();
                break;
            default  :
                system("cls");
        }
        printf("\n\n");
        system("pause");
        system("mode 80, 20");
        system("color 0F");
        system("cls");
        printf("\n\tAno: ");
        fflush(stdin); scanf("%d", &ano);
    }
    encerramento();
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
    system("mode 80, 15");
    system("color F0");
    printf("\n\n");
    printf("\t\t     @     @@@@@  @@@@@   @@@@@  \n");
    printf("\t\t   @ @     @   @  @   @      @@  \n");
    printf("\t\t     @     @@@@@  @@@@@    @@@@  \n");
    printf("\t\t     @         @      @      @@  \n");
    printf("\t\t   @@@@@   @@@@@  @@@@@   @@@@@  \n");
    printf("\n\n\tNome: Wesley Faveron de Almeida");
    printf("\n\tIdade: 29 anos");
    printf("\n\tCidade: São Paulo - SP");
    printf("\n\tFormacao: Licenciatura em Matemática - IME USP (completo)");
    printf("\n\t          Análise e Desenvolvimento de Sistemas - IFSP (cursando)");
}

void ano_2010()
{
    system("cls");
    system("mode 80, 14");
    system("color B0");
    printf("\n\n");
    printf("\t    @@@@  @@@@@    @    @@@@@            @@@@  @@@@@    @    @@@@    \n");
    printf("\t   @   @  @   @  @ @    @   @           @   @  @   @  @ @   @   @    \n");
    printf("\t      @@  @   @    @    @   @    @@@       @@  @   @    @      @@    \n");
    printf("\t     @@   @   @    @    @   @             @@   @   @    @     @@     \n");
    printf("\t   @@@@@  @@@@@  @@@@@  @@@@@           @@@@@  @@@@@  @@@@@ @@@@@    \n");
    printf("\n\n\t2010: Conclusão do Ensino Médio");
    printf("\n\t2011 e 2012: Vestibular");
    printf("\n\tRumo: Matemática/exatas");
    printf("\n\tUFSCar: Bachalelado em Matemática");
}

void ano_2013()
{
    system("cls");
    system("mode 60, 14");
    system("color F0");
    printf("\n\n");
    printf("\t    @@@@  @@@@@    @   @@@@@    \n");
    printf("\t   @   @  @   @  @ @      @@    \n");
    printf("\t      @@  @   @    @    @@@@    \n");
    printf("\t     @@   @   @    @      @@    \n");
    printf("\t   @@@@@  @@@@@  @@@@@ @@@@@    \n");
    printf("\n\n\tIngresso: Unicamp - Bacharelado em Matemática");
    printf("\n\tHabilidade: Lógica, comunicação");
    printf("\n\tCarreira: Professor");
}

void ano_2014()
{
    system("cls");
    system("mode 80, 16");
    system("color B0");
    printf("\n\n");
    printf("\t    @@@@  @@@@@    @    @   @            @@@@  @@@@@    @   @@@@@    \n");
    printf("\t   @   @  @   @  @ @    @   @           @   @  @   @  @ @       @    \n");
    printf("\t      @@  @   @    @    @@@@@    @@@       @@  @   @    @       @    \n");
    printf("\t     @@   @   @    @        @             @@   @   @    @       @    \n");
    printf("\t   @@@@@  @@@@@  @@@@@      @           @@@@@  @@@@@  @@@@@     @    \n");
    printf("\n\n\tIngresso: IME USP - Licenciatura em Matemática");
    printf("\n\t2015: Primeiro contato com programação - C");
    printf("\n\t2016: Projetos futuros com desenvolvimento");
    printf("\n\t2017: Auxiliar Administrativo - Prefeitura de Caieras");
    printf("\n\t      21/12/2017 - Oficialmente formado");
}

void ano_2018()
{
    system("cls");
    system("mode 80, 17");
    system("color F0");
    printf("\n\n");
    printf("\t    @@@@  @@@@@    @    @@@@@            @@@@  @@@@@    @   @@@@@    \n");
    printf("\t   @   @  @   @  @ @    @   @           @   @  @   @  @ @   @   @    \n");
    printf("\t      @@  @   @    @    @@@@@    @@@       @@  @   @    @   @@@@@    \n");
    printf("\t     @@   @   @    @    @   @             @@   @   @    @       @    \n");
    printf("\t   @@@@@  @@@@@  @@@@@  @@@@@           @@@@@  @@@@@  @@@@@ @@@@@    \n");
    printf("\n\n\tIngresso: Técnico em Informática para Internet");
    printf("\n\t          - HTML");
    printf("\n\t          - CSS");
    printf("\n\t          - Javascript");
    printf("\n\t          - PHP");
    printf("\n\t          - MySQL");
}

void ano_2021()
{
    system("cls");
    system("mode 90, 16");
    system("color B0");
    printf("\n\n");
    printf("\t    @@@@  @@@@@   @@@@    @              @    @@@@@ @   @     @     @     \n");
    printf("\t   @   @  @   @  @   @   @@             @ @     @   @   @    @ @    @     \n");
    printf("\t      @@  @   @     @@    @      @@@   @   @    @   @   @   @   @   @     \n");
    printf("\t     @@   @   @    @@     @           @@@@@@@   @   @   @  @@@@@@@  @     \n");
    printf("\t   @@@@@  @@@@@  @@@@@  @@@@@        @       @  @   @@@@@ @       @ @@@@@ \n");
    printf("\n\n\tIngresso: Análise e Desenvolvimento de Sistemas - IFSP");
    printf("\n\t          - C");
    printf("\n\t          - Java");
    printf("\n\t          - Engenharia de Software");
    printf("\n\t          - Banco de Dados");
}

void encerramento()
{
    system("cls");
    system("mode 80, 16");
    system("color 0F");
    printf("\n\n");
    printf("\t       @     @@@@@ @@@@@     @     @@@@@  @@@@@  @@@@ @@@@@@   \n");
    printf("\t      @ @    @     @   @    @ @    @    @ @     @     @    @   \n");
    printf("\t     @   @   @ @@@ @@@@@   @   @   @    @ @@@   @     @    @   \n");
    printf("\t    @@@@@@@  @   @ @  @   @@@@@@@  @    @ @     @     @    @   \n");
    printf("\t   @       @ @@@@@ @   @ @       @ @@@@@  @@@@@  @@@@ @@@@@@   \n");
    printf("\t                                                   @           \n");
    printf("\t                                                  @            \n");
    printf("\n\n https://github.com/Faveron/Exercicios-programa-em-C/tree/main/bootcamp%20Itau\n\n");
}
