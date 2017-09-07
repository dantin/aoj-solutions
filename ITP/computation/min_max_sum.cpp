#include <iostream>
using namespace std;

int main()
{
    int min, max;
    long sum = 0;
    int n, num;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if(i == 0)
        {
            min = num;
            max = num;
        }
        else
        {
            if(num < min)
                min = num;
            if(num > max)
                max = num;
        }
        sum += num;
    }
    cout << min << " " << max << " " << sum << endl;

    return 0;

}
