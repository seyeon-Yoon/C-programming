#include <stdio.h>

int main(void)
{
    int n, i, cnt = 0;

    printf("���� �Է� : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }

    if (cnt == 2)
        printf("%d�� �Ҽ� �Դϴ�.", n);

    return 0;
}