#include <iostream>
#include <string>

using namespace std;

const int X_MAX = 5;
const int Y_MAX = 7;

const char BALL = 'o';
const char EMPTY = '.';

void print(int x, int y)
{
    for (int yi = 0; yi <= Y_MAX; yi++)
    {
        for (int xi = 0; xi <= X_MAX; xi++)
            cout << " " << ( (x==xi && y==yi) ? BALL : EMPTY );

        cout << "\n";
    }
}

void wait()
{
    string s;
    getline(cin, s);
}

void move(int& x, int& y)
{
    static int xStep = 1;
    static int yStep = 1;

    if (x == 0 || x == X_MAX) xStep =- xStep;
    if (y == 0 || y == Y_MAX) yStep =- yStep;

    x += xStep;
    y += yStep;
}

bool atCorner(int x, int y)
{
    return (x==0 || x==X_MAX) && (y==0 || y==Y_MAX);
}

int main()
{
    int x = 1, y = 1;
    system("cls");
    print(x, y);

    do
    {
        wait();
        move(x, y);
        system("cls");
        print(x, y);
    } while ( !atCorner(x, y) );
}