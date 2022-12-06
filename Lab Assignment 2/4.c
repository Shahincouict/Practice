#include <stdio.h>
int main()
{
    int T, N,i;
    scanf("%d",&T);
    while ((T--))
    {
        scanf("%d", &N);
        N = (N / 4) - 3;
        for (i = 0; i < 4; i++)
        {
            printf("%d ",N);
            N=N+2;
        }
    }
    return 0;
}