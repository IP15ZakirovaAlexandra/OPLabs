#include<iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter the upper limit :";
    cin >> n;
    long mersen = 1;
    int p = 1;
    while (mersen < n) {
        bool isPrime = true;
        for (int i = 2; i <= p / 2; i++) {
            if (p % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            mersen = (long) pow(2, p) - 1;
            if (mersen < n) {
                cout << mersen << " ";
            }
        }
        p++;
    }
}


