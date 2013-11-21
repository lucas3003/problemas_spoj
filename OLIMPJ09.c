#include <stdio.h>

int main()
{
	int num_paises, num_modalidades;

	scanf("%d %d", &num_paises, &num_modalidades);

	int i, j, indice;

	int paises[num_paises];

	for(i = 0; i < num_paises; i++) paises[i] = 0;	

	for(i = 0; i < num_modalidades; i++)	
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &indice);
			paises[indice-1]++;		
		}
	}

	int first = 1, maior;	

	while(1)
	{
		maior = -1;

		for(i = 0; i < num_paises; i++)
		{
			if(paises[i] > maior) maior = paises[i];			
		}

		if(maior == -1) break;

		
		for(i = 0; i < num_paises; i++)		
		{
			if(paises[i] == maior)
			{
				if(first)
				{
					printf("%d", i+1);
					first = 0;
				}
				else
				{
					printf(" %d", i+1);	
				}	

				
				paises[i] = -1;
			}
		}
		
	}

	printf("\n");

	return 0;
}

