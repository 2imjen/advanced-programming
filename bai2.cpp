#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;

    cout << "Nhap vao 1 so bat ki: ";
    cin >> x;

    if(x < 0)
    {
        cout << "Biet thuc khong xac dinh!" << endl;
        return 0;
    }

    double res = (exp(x) - 1) / (sqrt(x) + 1);

    cout << "Ket qua la: " << res << endl;

    return 0;
}