#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Nhap vao 1 so thuc: ";
    cin >> x;

    double fx = 0;

    if (x >= 0 && x != 3)
    {
        fx = (2*x*x + 1 + sqrt(x)) / (x - 3);
    }

    cout << "fx = " << fx << endl;

    return 0;
}