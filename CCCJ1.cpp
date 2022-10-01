#include <iostream>
using namespace std;

int main() {
    int y, m, o;
    int diff;

    cin >> y;
    cin >> m;

    diff = m - y;
    o = m + diff;

    cout << o << endl;

}