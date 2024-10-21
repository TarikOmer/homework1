#include "homework1.h"
#include <iostream>
#include <stdexcept>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    int startValue = 1;

    for (int startCol = columns - 1; startCol >= 0; --startCol) {
        int j = startCol;
        for (int i = 0; i < rows && j < columns; ++i) {
            if (i < rows) {
                arr[i][j] = startValue++;
            }
            j++;
        }
    }

    for (int startRow = 1; startRow < rows; ++startRow) {
        int i = startRow;
        for (int j = 0; j < columns && i < rows; ++j) {
            arr[i][j] = startValue++;
            i++;
        }
    }
}

void printArray(const std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
