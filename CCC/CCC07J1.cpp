#include <iostream>
using namespace std;

int main() {
    int wo, wt, wth;

    cin >> wo >> wt >> wth;
    if((wo > wt && wo < wth) ||( wo < wt && wo > wth)) {
        cout << wo;
    } else if((wt > wo && wt < wth) || (wt < wo && wt > wth)) {
        cout << wt;
    } else if((wth > wo && wth < wt) || (wth < wo && wth > wt)) {
        cout << wth;
    }

}