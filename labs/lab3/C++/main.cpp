#include <iostream>

using namespace std;

double chislitel(int a, int k, double x) {
    double result = 1;
    int i = 0;
    while (i <= (k + 1)) {
        i++;
        result = result * (a - i);
    }
    return result * pow(x, k);
}

double factorial(int k) {
    int n = 1;
    int i = 1;
    while (i <= k) {
        i++;
        n = n * i;
    }
    return n;
}

int main() {
    int a;
    cout << "Enter an integer number a = ";
    cin >> a;
    double x;
    cout << "Enter fractional x from 0 to 1, x = ";
    cin >> x;
    int k = 1;
    double sum = 1;
    bool finish = false;
    while (!finish) {
        sum = sum + chislitel(a, k, x) / factorial(k);
        k++;
        if (chislitel(a, k, x) == 0) finish = true;
    }
    printf("%.5f", sum);
    return 0;
}




