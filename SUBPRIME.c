#include <stdio.h>

int main()
{
	int bancos, debentures, i, devedor, credor, valor, flag;

	while(1)
	{
		scanf("%d %d", &bancos, &debentures);

		if(bancos == 0 && debentures == 0) break;
		int reservas[bancos];

		for(i = 0; i < bancos; i++) scanf("%d", &reservas[i]);

		for(i = 0; i < debentures; i++)
		{
			scanf("%d %d %d", &devedor, &credor, &valor);
			reservas[devedor-1] -= valor;
			reservas[credor-1] += valor;
		}

		flag = 0;
		for(i = 0; i < bancos; i++)
		{
			if(reservas[i] < 0)
			{
				printf("N");
				flag = 1;
				break;
			}
		}

		if(!flag) printf("S");		
		printf("\n");
	}

	return 0;
}

