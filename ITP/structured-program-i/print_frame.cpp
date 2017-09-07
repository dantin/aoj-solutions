#include <iostream>
using namespace std;

void draw_frame(int h, int w)
{
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cout << ((i==0) || (i == h-1) || ((j == 0) || (j == w-1)) ? '#' : '.');
        }
        cout << endl;
    }
}

int main()
{
    int h, w;

    while(true)
    {
        cin >> h >> w;
        draw_frame(h, w);
        if(h == 0 && w == 0)
            break;
        cout << endl;
    }
}
