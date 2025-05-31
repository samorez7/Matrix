#include "Matrix.h"

// UpperTriangularMatrix
UpperTriangularMatrix::UpperTriangularMatrix(int n) : size(n), data(n, std::vector<double>(n, 0)) {}
void UpperTriangularMatrix::set(int i, int j, double value) {
    if (i <= j) data[i][j] = value;
}
double UpperTriangularMatrix::get(int i, int j) const {
    return (i <= j) ? data[i][j] : 0;
}
void UpperTriangularMatrix::print() const {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}

// LowerTriangularMatrix
LowerTriangularMatrix::LowerTriangularMatrix(int n) : size(n), data(n, std::vector<double>(n, 0)) {}
void LowerTriangularMatrix::set(int i, int j, double value) {
    if (i >= j) data[i][j] = value;
}
double LowerTriangularMatrix::get(int i, int j) const {
    return (i >= j) ? data[i][j] : 0;
}
void LowerTriangularMatrix::print() const {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}

// DiagonalMatrix
DiagonalMatrix::DiagonalMatrix(int n) : size(n), data(n, 0) {}
void DiagonalMatrix::set(int i, int j, double value) {
    if (i == j) data[i] = value;
}
double DiagonalMatrix::get(int i, int j) const {
    return (i == j) ? data[i] : 0;
}
void DiagonalMatrix::print() const {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}

// SymmetricMatrix
SymmetricMatrix::SymmetricMatrix(int n) : size(n), data(n, std::vector<double>(n, 0)) {}
void SymmetricMatrix::set(int i, int j, double value) {
    data[i][j] = value;
    data[j][i] = value;
}
double SymmetricMatrix::get(int i, int j) const {
    return data[i][j];
}
void SymmetricMatrix::print() const {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}

// main()
int main() {
    int n = 4;

    UpperTriangularMatrix upper(n);
    LowerTriangularMatrix lower(n);
    DiagonalMatrix diag(n);
    SymmetricMatrix sym(n);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            upper.set(i, j, i + j);
            lower.set(i, j, i + j);
            diag.set(i, j, (i == j) ? i + 1 : 0);
            sym.set(i, j, i * j);
        }

    std::cout << "Upper:\n"; upper.print();
    std::cout << "\nLower:\n"; lower.print();
    std::cout << "\nDiagonal:\n"; diag.print();
    std::cout << "\nSymmetric:\n"; sym.print();

    return 0;
}
