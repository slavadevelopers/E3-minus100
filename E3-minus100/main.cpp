#include <iostream>

using namespace std;

int main()
{
    short n, m;
    cin >> n >> m;
    if (n > 0 && m > 0) {
        if (n > m) {
            n = n -100;
        }
        cout << n << " " << m << endl;
        return 0;
    }
    if (n < 0 && m < 0) {
        if (n * (-1) > m * (-1)) {
            n = n -100;
        }
        cout << n << " " << m << endl;
        return 0;
    }
    if (n < 0) {
        if (n * (-1) > m) {
            n = n -100;
        }
        cout << n << " " << m << endl;
        return 0;
    }
    if (m < 0) {
        if (n > m * (-1)) {
            n = n -100;
        }
        cout << n << " " << m << endl;
        return 0;
    }
    cout << n << " " << m << endl;
    return 0;
}
