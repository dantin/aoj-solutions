#include <iostream>
#include <cstring>
using namespace std;

const char *suits = "SHCD";

int c2i(char c)
{
    int i = 0;
    for(const char *s = suits; *s != 0; s++, i++)
    {
        if(*s == c)
        {
            return i;
        }
    }
    return -1;
}

const char i2c(int i)
{
    return suits[i];
}

int main()
{
    const int SUIT_SIZE = 4;
    const int RANK_SIZE = 14;
    bool cards[SUIT_SIZE][RANK_SIZE];

    char s;
    int c, n;

    memset(cards, 0, sizeof(cards));

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s >> c;
        cards[c2i(s)][c] = true;
    }

    for(int i = 0; i < SUIT_SIZE; i++)
    {
        for(int j = 1; j < RANK_SIZE; j++)
        {
            if(cards[i][j] == false)
                cout << i2c(i)  << " " << j << endl;
        }
    }

    return 0;
}
