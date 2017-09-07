#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int tmp;
    if(*x > *y)
    {
        tmp = *x;
        *x = *y;
        *y = tmp;
    }
}

int main()
{
    int x, y;

    while(true)
    {
        cin >> x >> y;
        if(x == 0 && y == 0)
            break;
        swap(&x, &y);
        cout << x << " " << y << endl;
    }

    return 0;
}
