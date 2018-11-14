#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pontos_jogador=0, pontos_cpu=0;
main()
{
    player1();
    jogada();
    cpu();
    resultado(jogada,cpu);
}
int player1()
{
    int jogador;
    printf ("---JanKenPon---\n");
    printf ("%d Player X CPU %d\n", pontos_jogador, pontos_cpu);
    printf ("-------------\n");
    printf ("Informe jogada: 1. Pedra 2. Papel 3. Tesoura");
    scanf ("%d", &jogador);
    return jogador;
}
int jogada(int jogador)
{
    int j=jogador;
    switch(j)
    {
        case 1:printf ("1. Pedra\n");
        case 2:printf ("2. Papel\n");
        case 3:printf ("3. Tesoura\n");
    }
    return j;
}
int cpu()
{
    srand(time(NULL));
    int cpup;
    cpup = rand() % 3; /*Gera um numero aleatório*/
    switch(cpup)
    {
        case 0: printf ("CPU -> Pedra\n"); break;
        case 1: printf ("CPU -> Papel\n"); break;
        case 2: printf ("CPU -> Tesoura\n"); break;
    }
    return cpup;
}
int resultado(int jogada, int cpu)
{
        int jogador;
        jogador= jogada;
        cpu= cpup();
    if ((jogador == 0 && cpu==2) || (jogador == 1 && cpu == 0) || (jogador == 2 && cpu == 1)) /*Verifica vitória p1*/
        {
            printf("Player 1 wins\n");
            pontos_jogador++;
            player1();
        }
    if (jogador == cpu) /*Verifica empate*/
        {
            printf ("Draw\n");
            player1();
        }
    else
        {
            printf ("CPU wins\n");
            pontos_cpu++;
            player1();
        }
}
return 0;
}

