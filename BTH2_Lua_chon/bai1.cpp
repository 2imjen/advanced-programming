#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Nhap vao 1 so thuc: ";
    cin >> x;

    if (x < 0 || x == 4)
    {
        cout << "Bieu thuc khong xac dinh!" << endl;
        return 0;
    }

    double f = (x*x + 1) / (sqrt(x) - 2);

    cout << "f = " << f << endl;

    return 0;
}