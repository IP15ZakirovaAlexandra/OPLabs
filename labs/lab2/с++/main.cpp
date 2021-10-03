#include <iostream>

using namespace std;

int main() {
    cout << "You have vertices of the triangle at the coordinates you specified: A(a1;a2), B(b1,b2) and C(c1,c2). \n"
         << "Please, set coordinates to determine the type of triangle: \n";
    int a1;
    cout << "a1 =";
    cin >> a1;
    int a2;
    cout << "a2 =";
    cin >> a2;
    int b1;
    cout << "b1 =";
    cin >> b1;
    int b2;
    cout << "b2 =";
    cin >> b2;
    int c1;
    cout << "c1 =";
    cin >> c1;
    int c2;
    cout << "c2 =";
    cin >> c2;
    double AB = sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2));
    double BC = sqrt(pow(c1 - b1, 2) + pow(c2 - b2, 2));
    double CA = sqrt(pow(a1 - c1, 2) + pow(a2 - c2, 2));
    if (AB == BC && AB == CA) cout << "The type of triangle is equilateral";
    else if (AB == BC || BC == CA || CA == AB) cout << "The type of triangle is isosceles";
    else cout << "The type of triangle is versatile";


    return 0;
}