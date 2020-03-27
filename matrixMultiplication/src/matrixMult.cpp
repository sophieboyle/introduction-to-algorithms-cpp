//
// Created by soppy on 27/03/2020.
//
#include "matrixMult.h"

/**
 * Constructs a matrix with the given number of
 * rows and columns, and fills it with a given
 * default value.
 *
 * @param rows Unsigned integer of row size
 * @param cols Unsigned integer of column size
 * @param def Default integer to populate the matrix with
 */
Matrix::Matrix(unsigned rows, unsigned cols, int def) {
    m_rowSize = rows;
    m_colSize = cols;
    // Resize matrix to have given number of rows
    m_matrix.resize(rows);
    // Resizes each row to appropriate length given the columns
    for (unsigned i{0}; i < rows; i++){
        m_matrix[i].resize(cols, def);
    }
}

Matrix Matrix::operator+(Matrix &B) {
    Matrix sum(m_rowSize, m_colSize, 0);
    for (int i{0}; i < m_rowSize; i++){
        for (int j{0}; j < m_colSize; j++){
            sum(i, j) = this->m_matrix[i][j] + B.m_matrix[i][j];
        }
    }
    return sum;
}

int &Matrix::operator()(const unsigned &row, const unsigned &col) {
    return this->m_matrix[row][col];
}

void Matrix::print() const {
    for (int i{0}; i < m_rowSize; i++){
        for (int j{0}; j < m_colSize; j++){
            std::cout << m_matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
}

unsigned Matrix::getRows() const {
    return this->m_rowSize;
}

unsigned Matrix::getCols() const {
    return this->m_colSize;
}

