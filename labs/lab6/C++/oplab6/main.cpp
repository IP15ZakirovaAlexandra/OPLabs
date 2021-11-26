#include <iostream>
#include <cmath>

using namespace std;

long double exp(double x, long double E) {
    long double xxx = 1;
    long double factorial = 1;
    long double result = 1;
    long double res0 = 0;
    bool finish = false;
    unsigned i = 1;
    while(!finish){
        result += xxx / factorial;
        xxx *= x;
        factorial *= i;
        if (abs(result - res0) < E) finish = true;
        res0 = result;
        i++;
    }
    return result;
}

int main() {
    long double x;
    cout << "Create an integer: ";
    cin >> x;
    long double E;
    cout << "Please, set the accuracy: ";
    cin >> E;
    cout << "e^" << x << " = " << exp(x, E) << "\n" ;
    if (x > 0) {
        x = atan(x);
        cout << "y = " << exp(x, E);
    } else {
        x = pow(x, 2);
        cout << "y = " << exp(x, E) + 1;
    }
    return 0;
}
