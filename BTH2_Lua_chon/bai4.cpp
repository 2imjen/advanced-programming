#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Nhap vao 1 so thuc: ";
    cin >> x;

    if (x < 1)
    {
        cout << "f(x) khong xac dinh!" << endl;
        return 0;
    }

    double fx = pow(x, 3) + sqrt(x-1) + 3*exp(x);

    cout << "fx = " << fx << endl;

    return 0;
}