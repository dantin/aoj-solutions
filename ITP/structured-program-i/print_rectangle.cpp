#include <iostream>
using namespace std;

void draw_rectangle(int h, int w)
{
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cout << '#';
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
        draw_rectangle(h, w);
        if(h == 0 && w == 0)
            break;
        cout << endl;
    }

    return 0;
}
