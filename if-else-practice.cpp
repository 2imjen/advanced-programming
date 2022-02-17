#include <iostream>
#include <cmath>
using namespace std;

//bai 2
int bai2(int n)
{
    int res = 0;

    for (int i = 1; i <= n; i++)
        res += (i-1) * i * (i+1);

    return res;
}

//bai 4
double bai4(int n)
{
    double res = 0;

    for (int i = n; i >= 1; i--)
        res = sqrt(i + res);

    return res;
}

//bai 5
int bai5(int n)
{
    int m = 0;
    int tong = 0;
    
    while(tong + m < n)
    {
        tong += m;
        m++;
    }

    return m - 1;
}

int main()
{
    cout << bai5(5) << endl;

    return 0;
}