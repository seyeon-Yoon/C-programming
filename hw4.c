#include <stdio.h>

int main(void)
{
    int n, i, cnt = 0;

    printf("정수 입력 : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }

    if (cnt == 2)
        printf("%d는 소수 입니다.", n);

    return 0;
}