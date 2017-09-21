#include <stdio.h>
#include <string.h>

int main()
{
    const int SIZE = 100;

    int n;
    int t = 0, h = 0;
    char tc[SIZE+1], hc[SIZE+1];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", tc);
        scanf("%s", hc);
        int rc = strcmp(tc, hc);
        if(rc == 0)
        {
            h++;
            t++;
        }
        else if(rc < 0)
        {
            h += 3;
        }
        else
        {
            t += 3;
        }
    }
    printf("%d %d\n", t, h);

    return 0;
}
