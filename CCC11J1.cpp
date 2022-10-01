#include <iostream>
using namespace std;

int main()
{
    int ant, eyes;

    cin >> ant;
    cin >> eyes;

    if ((ant >= 3 && eyes <= 4))
    {
        cout << "TroyMartian" << endl;
        if (ant <= 6 && eyes >= 2)
        {
            cout << "VladSaturnian" << endl;
        }
    }
    else if (ant <= 6 && eyes >= 2)
    {
        cout << "VladSaturnian" << endl;

        if (ant >= 3 && eyes <= 4)
        {
            cout << "TroyMartian" << endl;
        }

        if (ant <= 2 && eyes <= 3)
        {
            cout << "GraemeMercurian" << endl;
        }
    }
    else if (ant <= 2 && eyes <= 3)
    {
        cout << "GraemeMercurian";
        if (ant <= 6 && eyes >= 2)
        {
            cout << "VladSaturnian" << endl;
        }
    }
}