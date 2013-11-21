#include <stdio.h>

int main()
{
	long entrada;
	int i, digito, contador, flag;

	while(1)
	{
		contador = 0;
		flag = 0;
		scanf("%ld", &entrada);
		if(entrada == 0) break;

		printf("The parity of ");
		for(i = 31; i >= 0; i--)
		{
			digito = entrada >> i;

			if(digito & 1) 
			{
				contador ++;
				printf("1");
				flag = 1;
			}
			else
			{
				if(flag) printf("0");
			}
		}

		printf(" is %d (mod 2).\n", contador);
	}



	return 0;

}

