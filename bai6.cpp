#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    
    if(x == 0 && y == 0)
    {
        cout << "Gia tri nhap vao khong hop le" << "\n";
        return 0;
    }

    double res = (2 * exp(1) - x + y) / (x*x + y*y);

    cout << "Ket qua la: " << res << endl;

    return 0;
}