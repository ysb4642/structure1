#include <stdio.h>

int Fivo(int n)
{
    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return Fivo(n-1)+Fivo(n-2);
}

int main(void)
{
    int i;
    for(i = 1; i < 15; i++)
        printf("%d ", Fivo(i));
    putchar('\n');
    return 0;
}