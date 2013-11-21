#include <stdio.h>

int main()
{
	int consultas, i;
	int xdivisor, ydivisor;
	int x, y;

	while(1)
	{
		scanf("%d", &consultas);
		if(consultas == 0) break;
		scanf("%d %d", &xdivisor, &ydivisor);

		for(i = 0; i < consultas; i++)
		{
			scanf("%d %d", &x, &y);

			if(x < xdivisor && y > ydivisor) printf("NO");
			else if(x > xdivisor && y > ydivisor) printf("NE");
			else if(x < xdivisor && y < ydivisor) printf("SO");
			else if(x > xdivisor && y < ydivisor) printf("SE");
			else printf("divisa");
			printf("\n");
		}
	}

	return 0;
}

