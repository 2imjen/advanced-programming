#include <iostream>
#include <cmath>
#include <iomanip> //using for formatting output

using namespace std;

#define PI 3.14

//bai 1
bool soChinhPhuong(int n)
{
    if (n <= 0) return false;

    if (sqrt(n)*sqrt(n) == n)
        return true;

    return false;
}

//bai 2
bool isLunarYear(int year)
{
    if (year < 0) return false;

    if ((year%400 == 0) || ((year%4 == 0 && (year%100 != 0))))
        return true;

    return false;
}

//bai 3
void tranferTime(double n)
{
    double tong = n * 24;

    int hours = (int)tong;
    tong = (tong - (int)tong) * 10;

    int minutes = (int)tong * 6;
    tong = (tong - (int)tong) * 10;

    int seconds = (int)tong * 6;
    tong = (tong - (int)tong) * 1000;

    int miliseconds = (int)tong;

    cout << hours << ":" << minutes << ":" << setfill('0') << setw(2) << seconds << "." 
    << setfill('0') << setw(3) << miliseconds << endl;
}

//bai 4
void collatz(int n)
{
    if (n % 2 == 0)
        cout << (n / 2) << endl;
    else
        cout << (n * 3 + 1) << endl;
}

//bai 5
void advancedCollatz(int n)
{
    while (n != 1)
    {
        cout << n << " -> ";

        if (n % 2 == 0)
            n = (n / 2);
        else
            n = (n * 3 + 1);
    }

    cout << n << endl;
}

//bai 11
double gocmax(double a, double b, double c)
{
    double A = acos((b*b + c*c - a*a) / (2 * b * c)) * 180 / PI;
    double B = acos((a*a + c*c - b*b) / (2 * a * c)) * 180 / PI;
    double C = acos((a*a + b*b - c*c) / (2 * a * b)) * 180 / PI;

    double res = A;

    if (B > res)
        res = B;
    if (C > res)
        res = C;

    return res;
}

int main()
{
    cout << "Goc max: " << gocmax(9, 9, 9);

    return 0;   
}