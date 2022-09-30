#include <iostream>

using namespace std;

int main()
{
    int a;
        cout << "masukkan bilangan";
        cin >> a;
    if (a % 2 == 0 && a > 25 && a < 50) {
        cout << "1.bilangan sesuai" << endl;
    }

    if (a % 2 == 1 && (a > 13 || a < 5)) {
        cout << "2.bilangan sesuai" << endl;
    }

    if ((a > 25 && a < 50) || (a % 2 == 1 && a > 3 && a < 15)) {
        cout << "3.bilangan sesuai" << endl;
    }
    return 0;
}
