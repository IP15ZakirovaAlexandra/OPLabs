#include<iostream>
using namespace std;


int main()
{
    cout << "you have a system of linear equations: \n" << "a1*x + b1*y = c1; \n" << "a2*x + b2*y = c2; \n";
    double a1;
    cout << "Write the first coefficient(a1): \n";
    cin >> a1;
    double b1;
    cout << "Write the second coefficient(b1): \n";
    cin >> b1;
    double a2;
    cout << "Write the third coefficient(a2): \n";
    cin >> a2;
    double b2;
    cout << "Write the fourth coefficient(b2): \n";
    cin >> b2;
    double c1;
    cout << "Write the value of the first equation(c1): \n";
    cin >> c1;
    double c2;
    cout << "Write the value of second equation(c2): \n";
    cin >> c2;
    double y = (c2-(c1*a2))/(b2*a1-b1*a2);
    double x = (c1-b1*y)/a1;
    cout <<"x=" << x << "\n";
    cout <<"y=" << y << "\n";


    return 0;
}
