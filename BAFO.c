#include <stdio.h>

int main()
{
	int rodadas, i, aldo, beto, rodadaAldo, rodadaBeto, teste = 1;	

	while(1)
	{
		scanf("%d", &rodadas);
		aldo = 0;
		beto = 0;
		if(rodadas == 0) break;

		for(i = 0; i < rodadas; i++)
		{
			scanf("%d %d", &rodadaAldo, &rodadaBeto);
			aldo += rodadaAldo;
			beto += rodadaBeto;
		}

		printf("Teste %d\n", teste++);
		if(aldo > beto) printf("Aldo");
		else printf("Beto");
		printf("\n\n");
	}

	return 0;
}

