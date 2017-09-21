#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp;
    if (*x > *y)
    {
        tmp = *y;
        *y = *x;
        *x = tmp;
    }
}

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    swap(&a, &b);
    swap(&a, &c);
    swap(&b, &c);
    printf("%d %d %d\n", a, b, c);

    return 0;
}
