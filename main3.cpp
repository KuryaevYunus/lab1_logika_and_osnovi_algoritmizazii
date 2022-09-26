#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    setlocale (LC_ALL,"RUS");
    int* arr, peremen = 1;
    int max, min, res, n;
    printf("Введите размер массива = ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int*));
    printf("\nВывод матрицы\n");

    for (int i=0;i<n;i++){
        arr[i] = -10 + rand()%51;
        peremen *= arr[i];
        printf("%5d", arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 0;i < n; i++){
        if(max < arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
    }

    printf ("\n\n Максимальное число в массиве: ");
    printf("%d", max);
    printf ("\n\n Минимальное число в массиве: ");
    printf("%d", min);
    printf("\n\n Разность максимума и минимума: ");
    res = max - min;
    printf("%d", res);
    return 0;
}


