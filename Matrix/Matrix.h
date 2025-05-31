#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>

// Верхньотрикутна
class UpperTriangularMatrix {
    int size;
    std::vector<std::vector<double>> data;
public:
    UpperTriangularMatrix(int n);
    void set(int i, int j, double value);
    double get(int i, int j) const;
    void print() const;
};

// Нижньотрикутна
class LowerTriangularMatrix {
    int size;
    std::vector<std::vector<double>> data;
public:
    LowerTriangularMatrix(int n);
    void set(int i, int j, double value);
    double get(int i, int j) const;
    void print() const;
};

// Діагональна
class DiagonalMatrix {
    int size;
    std::vector<double> data;
public:
    DiagonalMatrix(int n);
    void set(int i, int j, double value);
    double get(int i, int j) const;
    void print() const;
};

// Симетрична
class SymmetricMatrix {
    int size;
    std::vector<std::vector<double>> data;
public:
    SymmetricMatrix(int n);
    void set(int i, int j, double value);
    double get(int i, int j) const;
    void print() const;
};

#endif
