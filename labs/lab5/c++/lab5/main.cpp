#include <iostream>
#include <cmath>

using namespace std;

int primeenumber(int p) {
    for (p = 2;; p++)
        if (p % (p/2) == 0)
            break;
    return p;
}

int main() {
    int n, kk;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;
    kk = 0;
    for (int i = 2; kk < n; i++) {
        int f = pow(2, i) - 1;
        simplenumber(f);
        cout << f << "   ";
        kk++;
    }
    return 0;
}

