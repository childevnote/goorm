#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, T, M = 0;
    int C[100];
    int min = 0;

    scanf("%d", &N);
    scanf("%d %d", &T, &M);

    if (N < 1 || N > 100 || T < 0 || T > 23 || M < 0 || M > 59)
        exit(1);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &C[i]);
        min += C[i];
        if (C[i] < 0 || C[i] > 1000)
            exit(1);
    }

    M += min % 60;
    T += min / 60;

    if (M >= 60)
    {
        T += M / 60;
        M %= 60;
    }

    if (T >= 24)
        T %= 24;

    printf("%d %d", T, M);
    return 0;
}
