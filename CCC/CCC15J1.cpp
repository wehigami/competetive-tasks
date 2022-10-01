#include <iostream>
using namespace std;

int main() {
    int mainday = 18;
    int mainmo = 2;
    int day, mo;

    cin >> mo;
    cin >> day;

    if(mo < mainmo) {
        cout << "Before";
    } else if(mo == mainmo) {
        if(day < mainday) {
            cout << "Before";
        } else if(day == mainday) {
            cout << "Special";
        } else {
            cout << "After";
        }
    } else if(mo > mainmo) {
        cout << "After";
    }
}