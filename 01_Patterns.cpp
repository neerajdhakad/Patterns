#include <iostream>
using namespace std;

void pattern_01(const int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_02(const int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_03(int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_04(int &n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern_05(const int &n)
{
    for (int row = 0; row < 2 * n; row++)
    {
        int totalColsInRow = row > n ? 2 * n - row : row;
        for (int j = 0; j < totalColsInRow; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// Netlink
void pattern_06(const int &n)
{
    for (int row = 0; row < n; row++)
    {
        int totalColsInRow = n - row;
        for (int spaces = 0; spaces < n - row; spaces++)
        {
            cout << " ";
        }
        for (int j = 0; j <= row; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;

    pattern_01(n);
    cout << endl;

    pattern_02(n);
    cout << endl;

    pattern_03(n);
    cout << endl;

    pattern_04(n);
    cout << endl;

    pattern_05(n);
    cout << endl;

    pattern_06(n);
    cout << endl;

    return 0;
}