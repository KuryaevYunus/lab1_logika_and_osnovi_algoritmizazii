#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct student
{
    char family [20];
    char facult[20];
    char name [20];
};

int main(void) {
    int i;
    int k = 0;
    setlocale(LC_ALL, "Russian");
    struct student stud [3];
    struct student tmp;

    for (int i = 0; i < 3; i++) {
        printf("%d", i);
        printf("\n Введите фамилию студента: ");
        scanf("%s", stud[i].family);
        printf(" Введите имя студента: ");
        scanf("%s", stud[i].name);
        printf(" Введите факультет студента: ");
        scanf("%s", stud[i].facult);
    }

    char targetString[20];
    printf ("\nВведите ключевое слово: ");
    scanf("%s", targetString);

    for (int i = 0; i < 3; i++) {
        if (strcmp(targetString, stud[i].family) == 0) {
            printf("Результат: Студент %s %s обучается на факультете %s\n", stud[i].family, stud[i].name, stud[i].facult);}
            if (strcmp(targetString, stud[i].name) == 0) {
                printf("Результат: Студент %s %s обучается на факультете %s\n", stud[i].family, stud[i].name, stud[i].facult);}
            if (strcmp(targetString, stud[i].facult) == 0) {
                printf("Результат: Студент %s %s обучается на факультете %s\n", stud[i].family, stud[i].name, stud[i].facult);}

            k = 1;}

        if (k == 0) {
        printf("Не найдено");
    }
    return 0;
}