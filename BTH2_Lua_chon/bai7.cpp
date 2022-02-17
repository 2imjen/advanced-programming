#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b;

    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    if (a != 0)
    {
        double x = -b/a;
        cout << "Phuong trinh co nghiem duy nhat: " << x << endl;
    }
    else if (b != 0)
        cout << "Phuong trinh vo nghiem" << endl;
    else
        cout << "Phuong trinh vo so nghiem" << endl;
        
    return 0;
}