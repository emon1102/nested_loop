#include <stdio.h>

int main()
{
    int N, M;
    // frist a N and M nawa hoyece row and colom input nawar jonno

    scanf("%d %d", &N, &M);
    // maximum boro size tai niyeci matrix ar jonno
    int Emon[100][100];
    // ei akta looop chalano hoyece basically matrix ta k input nawar jonno

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &Emon[i][j]);
        }
    }
    // ei loop ta calano hoyece basically frist row and last row k
    // odol bodol korar jonno
    for (int i = 0; i < N; i++)
    {
        int temp = Emon[i][0];
        Emon[i][0] = Emon[i][M - 1];
        Emon[i][M - 1] = temp;
    }
    // ei kahne frist row and last row odol bodol korar por
    // j matrix pawa jai sei matrix ar frist coloum and last coloum
    // odol bodol korar jonno use kora hoyece

    for (int j = 0; j < M; j++)
    {
        int temp = Emon[0][j];
        Emon[0][j] = Emon[N - 1][j];
        Emon[N - 1][j] = temp;
    }
    // normally matrix ta print korar jonnoi ei loop ta use kora hoyece
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", Emon[i][j]);
        }
        printf("\n");
    }

    return 0;
}
