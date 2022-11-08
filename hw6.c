#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findOdd(int* ptr, int arySize) {

    printf("Odd numbers: ");

    int i;

    for (i = 0; i < arySize; i++) {

        if (ptr[i] % 2 != 0) {

            printf("%d ", ptr[i]);

        }

    }

    printf("\n");

    return;

}



void findEven(int* ptr, int arySize) {

    printf("Even numbers: ");

    int i;

    for (i = 0; i < arySize; i++) {

        if (ptr[i] % 2 == 0)

            printf("%d ", ptr[i]);

    }

    printf("\n");

    return;

}



int main(void) {

    int ary[5];

    int len;

    printf("Please input five integers: ");

    for (int i = 0; i < 5; i++)

        scanf_s("%d", &ary[i]);



    printf("\n");

    len = sizeof(ary) / sizeof(int);



    findOdd(ary, len);

    findEven(ary, len);

    return 0;

}