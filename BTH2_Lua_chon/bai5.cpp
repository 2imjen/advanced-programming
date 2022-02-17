#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int soLuong, donGia;

    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;

    if (soLuong <= 0 || donGia <= 0)
    {
        cout << "So lieu khong hop le." << endl;
        return 0;
    }

    double tongTien = soLuong * donGia;

    if (soLuong >= 10)
        tongTien = tongTien * (1 - 0.3);
    else if (soLuong > 4)
        tongTien = tongTien * (1 - 0.15);

    cout << "Tong tien: " << tongTien << endl;

    return 0;
}