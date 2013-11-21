#include <stdio.h>

int main()
{
    int alunos, i, j, maiorPontuacao;

    while(1)
    {
        maiorPontuacao = 0;
        scanf("%d", &alunos);
        if(alunos < 1 || alunos > 100) break;

        int votacao[alunos][alunos], pontuacao[alunos];

        for(i = 0; i < alunos; i++) pontuacao[i] = 0;

        for(i = 0; i < alunos; i++)
        {
            for(j = 0; j < alunos; j++)
            {
                scanf("%d", &votacao[i][j]);
                if(votacao[i][j] == 1) pontuacao[j]++;
                if(pontuacao[j] > maiorPontuacao) maiorPontuacao = pontuacao[j];
            }
        }

        printf("%d\n", maiorPontuacao);
    }

    return 0;
}


