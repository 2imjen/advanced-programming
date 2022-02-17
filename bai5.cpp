#include <iostream>
#include <cmath>

using namespace std;

int dayOfMonth(int month, int year)
{
    int res = 0;

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        res = 31;
        break;    
    case 4: case 6: case 9: case 11:
        res = 30;
        break;
    case 2:
        if ((year%400 == 0) || (year%4 == 0 && year%100 != 0))
            res = 29;
        else
            res = 28;
        break;
    }

    return res;
}

bool validateYear(int year)
{
    return (year > 0);
}

bool validateMonth(int month)
{
    return (month > 0) && (month <= 12);
}

bool validateDay(int day, int month, int year)
{
    int maxDayOfMonth = dayOfMonth(month, year);

    return (day > 0) && (day <= maxDayOfMonth);
}

int main()
{
    int day, month, year;
    
    cin >> day >> month >> year;

    if (!validateDay(day, month, year) || !validateMonth(month) || !validateYear(year))
    {
        cout << "Ngày, tháng, năm nhập vào không hợp lệ" << endl;
        return 0;
    }

    cout << day << "/" << month << "/" << year << endl;

    int maxDay = dayOfMonth(month, year);

    cout << "Day of month: " << maxDay << "\n";

    if (day != maxDay)
        day++;
    else if (month == 12)
    {
        day = 1;
        month = 1;
        year++;
    }
    else
    {
        day = 1;
        month++;
    }

    cout << day << "/" << month << "/" << year << endl;

    return 0;
}