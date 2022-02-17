#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Nhap vao 1 so thuc: ";
    cin >> x;

    double fx = 0;

    if (x > 0 && x != 2)
    {
        fx = (x*x + 2*sqrt(x)) / (x - 2);
    }

    cout << "fx = " << fx << endl;

    return 0;
}