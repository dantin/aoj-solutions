#include <stdio.h>
#include <math.h>

#define RATIO acos(-1) / 180

int main()
{
    int a, b, c;
    double hb, ha, a1, cc;

    scanf("%d %d %d", &a, &b, &c);
    hb = a * sin(c * RATIO);
    ha = hb * b / a;
    a1 = a * cos(c * RATIO);
    cc = sqrt(pow(hb, 2.0) + pow(b - a1, 2.0));
    printf("%f\n%f\n%f\n", hb * b / 2, a + b + cc, ha);

    return 0;
}
