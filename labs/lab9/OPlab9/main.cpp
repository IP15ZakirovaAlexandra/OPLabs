#include <iostream>

using namespace std;

int main() {
    char str[256];
    puts("Enter the string:");
    gets_s(str);
    cout << "\nSymbols that occur only once:\n";
    int length = strlen(str);
    for (int i = 0; i < length; ++i) {
        bool find = false;
        for (int j = 0; j < length; ++j) {
            if ((str[i] == str[j]) && (j != i)) {
                find = true;
                break;
            }
        }
        if (!find)
            cout << str[i] << " on "<< i + 1 << " position\n"; //(i + 1) is position in string with considering spaces
    }
    return 0;
}

