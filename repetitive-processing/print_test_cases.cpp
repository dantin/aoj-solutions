#include <iostream>
using namespace std;

int main()
{
    int i, x;

    i = 1;
    while(true)
    {
        cin >> x;
        if(x == 0)
            break;
        cout << "Case " << i++ << ": " << x << endl;
    }
    return 0;
}
