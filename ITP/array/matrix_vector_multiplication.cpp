#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100];
    int b[100];
    long c[100];

    int n, m;

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    // compute
    for(int i = 0; i < n; i++)
    {
        c[i] = 0;
        for(int j = 0; j < m; j++)
        {
            c[i] += matrix[i][j] * b[j];
        }
    }

    // output
    for(int i = 0; i < n; i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}
