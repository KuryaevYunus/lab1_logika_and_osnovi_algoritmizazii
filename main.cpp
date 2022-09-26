#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int** a;
    int i, j, sum, sum2, N, M;
    setlocale (LC_ALL,"RUS");
    printf("Введите количество строк: ");
    scanf("%d", &N);
    printf("Введите количество столбцов: ");
    scanf("%d", &M);
    a = (int**)malloc(N * sizeof(int*));
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {

        a[i] = (int*)malloc(M * sizeof(int));
        for (j = 0; j < M; j++)
        {
            a[i][j] = rand() % 100;
        }
    }

    sum = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Суммы значений в каждой строке: ");
    for (i = 0; i < N; i++)
    {
        sum = 0;
        for (j = 0; j < M; j++)
        {
            sum = sum + a[i][j];
        } printf("%d ", sum);
    }
    printf("\n");
    printf("Суммы значений в каждом столбце: ");

    for (j = 0; j < M; j++)
    {
        sum = 0;
        for (i = 0; i < N; i++)
        {
            sum = sum + a[i][j];
        } printf("%d ", sum);
    }


    for (i = 0; i < N; i++)
    {
        for (j = i; j < M; j++) {

                sum2 += a[i][j];
        }
    }
    printf("\n");
    printf("%d - Сумма элекментов, находящихся выше главной диагонали", sum2);
    return 0;
}