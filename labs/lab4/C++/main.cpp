#include <iostream>

using namespace std;


long chislitel(int k, int x) {
    int i = 2;
    long m = x;
    while (i <= k) {
        m *= x;
        i++;
    }
    return m;
}

long long znamenatel(int k) {
    long long factorial = 1;
    for (int i = 1; i <= (2 * k); i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    int n;
    cout << "Enter an integer number n > 0, n = ";
    cin >> n;
    int x;
    cout << "Enter an integer number x, x = ";
    cin >> x;
    int k = 1;
    while (k <= n) {
        cout << chislitel(k, x) << "/" << znamenatel(k) << "\n";
        k++;
    }
    return 0;
}

