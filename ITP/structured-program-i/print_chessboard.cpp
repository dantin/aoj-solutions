#include <iostream>
using namespace std;

void draw_chessboard(int h, int w)
{
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cout << (((i+j) % 2 == 0) ? '#' : '.');
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
        draw_chessboard(h, w);
        if(h==0 && w ==0)
            break;
        cout << endl;
    }

    return 0;
}
