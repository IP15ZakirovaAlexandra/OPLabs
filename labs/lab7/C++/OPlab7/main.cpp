#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int rand_between(const int from, const int to) {
    if (to == from)
        return to;
    if (to < from)
        return rand_between(to, from);
    return from + rand() % (to - from + 1);
}

double *get_random_array(int n, int from, int to) {
    double *arr = new double[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = rand_between(from, to);
    }
    return arr;
}

void print_array(const string &name, double *arr, int n) {
    cout << "\n" << name << ": ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(NULL));
    int n, from, to;
    cout << "Please, enter the length of array: ";
    cin >> n;
    cout << "\nPlease, enter the range,\n";
    cout << "From:";
    cin >> from;
    cout << "To:";
    cin >> to;
    double *array = get_random_array(n, from, to);
    print_array("firstArray", array, n);
    //поиск минимального элемента
    double s_min = array[0];
    for (int i = 0; i < n; ++i) {
        if (array[i] < s_min) {
            s_min = array[i];
        }
    }

    cout << "min: " << s_min << endl;

    //дальше ищем сумму
    double sum = 0;
    if(s_min != 0) {
        for (int i = 1; i < n; i++) {
            sum = sum + array[i]/s_min;
        }
    }
    if (s_min == 0){
        for (int i = 0; i < n; i++) {
            sum = sum + pow(array[i],2);
        }
    }
    cout << "\nSum: " << sum << endl;
    //модификация массива
    int k;
    cout << "Please enter an integer: ";
    cin >> k;
    for (int i = 0; i < n; i++){
        if(array[i] > k) {
            array[i] = sum;
        }
    }
    print_array("secondArray", array, n);
    delete[] array;
}

