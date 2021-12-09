#include <iostream>
#include <ctime>

using namespace std;

int **Create(size_t n, size_t m) {
    int **M = new int *[n];
    for (size_t i = 0; i < n; ++i) {
        M[i] = new int[m];
    }
    return M;
}

void Delete(int **M, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        delete[] M[i];
    }
    delete[] M;
}

void FillRandomNumbers(int **matrix, const size_t rows, const size_t columns) {
    for (size_t row = 0; row < rows; row++)
        for (size_t column = 0; column < columns; column++)
            matrix[row][column] = rand()%9;
}

void Print(int **M, const string &name, size_t n, size_t m) {
    cout << "\nMatrix " << name << endl;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            cout << M[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    srand(time(nullptr));
    size_t n, m, p;
    cout << "set the dimension of the matrix A(n x m)\n";
    cout << "n: ";
    cin >> n;
    cout << "\nm: ";
    cin >> m;
    cout << "\nset the dimension of the matrix B(m x p)\n";
    cout << "p: ";
    cin >> p;
    int **A = Create(n, m);
    int **B = Create(m, p);
    FillRandomNumbers(A, n, m);
    FillRandomNumbers(B, m, p);
    Print(A, "A", n, m);
    cout << endl;
    Print(B, "B", m, p);
    int **C = new int *[n];
    for (int i = 0; i < n; i++) {
        C[i] = new int[p];
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    Print(C, "product", n, p);
    Delete(A, n);
    Delete(B, m);
    Delete(C, n);
    return 0;
}