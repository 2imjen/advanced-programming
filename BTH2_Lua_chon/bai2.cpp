#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Nhap vao 1 so thuc: ";
    cin >> x;

    if (x < 0)
    {
        cout << "Bieu thuc khong xac dinh!" << endl;
        return 0;
    }

    double fx = (exp(x) - 1) / (sqrt(x) + 1);

    cout << "fx = " << fx << endl;

    return 0;
}