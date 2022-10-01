#include <iostream>
using namespace std;

bool compareEqual(int a, int b, int c)
{
    if (a == b || a == c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool compareNotEqual(int a, int b, int c)
{
    if (a != b || a != c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a1, a2, a3;

    cin >> a1;
    cin >> a2;
    cin >> a3;

    if (a1 == 60 && a2 == 60 && a3 == 60)
    {
        cout << "Equilateral";
    }
    else if ((a1 + a2 + a3 == 180))
    {
        if (compareEqual(a1, a2, a3) || compareEqual(a2, a1, a3) || compareEqual(a3, a1, a2))
        {
            cout << "Isosceles";
        }
        else if (compareNotEqual(a1, a2, a3) || compareNotEqual(a2, a1, a3) || compareNotEqual(a3, a1, a2))
        {
            cout << "Scalene";
        }
    }
    else if (a1 + a2 + a3 != 180)
    {
        cout << "Error";
    }
}