#include <stdio.h>

int f91(int n)
{
    if(n <= 100)
        return f91(f91(n + 11));

    return n - 10;
}

int main()
{
    int entrada;
    while(1)
    {
        scanf("%d", &entrada);
        if(entrada == 0) break;
        printf("f91(%d) = %d\n", entrada, f91(entrada));
    }
}


