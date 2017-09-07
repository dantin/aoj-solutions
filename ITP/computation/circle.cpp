#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double r;

    cin >> r;

    cout << fixed << setprecision(6) << M_PI * r * r << " " << 2 * M_PI * r << endl;
}
