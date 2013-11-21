#include <stdio.h>

int main()
{
	
	int linhas, colunas, i, j;
	long int maior = 0, atual;

	scanf("%d %d", &linhas, &colunas);

	int produtividade[linhas][colunas];

	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
			scanf("%d", &produtividade[i][j]);
		}
	}

	for(i = 0; i < linhas; i++)
	{
		atual = 0;

		for(j = 0; j < colunas; j++)	
			atual += produtividade[i][j];			
		
		if(atual > maior) maior = atual;
	}

	for(j = 0; j < colunas; j++)
	{
		atual = 0;

		for(i = 0; i < linhas; i++)
			atual += produtividade[i][j];

		if(atual > maior) maior = atual;
	}

	printf("%ld\n", maior);
	return 0;
}

