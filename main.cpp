// Multidimensional Dynamic Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void deleteRow(int** arr, int rows, int cols, int rowToDelete) {
    if (rowToDelete >= rows) {
        return;
    }

    for (int i = rowToDelete; i < rows - 1; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = arr[i + 1][j];
        }
    }

    for (int i = 0; i < cols; i++) {
        arr[rows - 1][i] = 0;
    }
}

int main() {
    const int ROWS = 3;
    const int COLS = 3;

    int** arr = new int* [ROWS];
    for (int i = 0; i < ROWS; i++) {
        arr[i] = new int[COLS];
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = i * COLS + j;
        }
    }

    deleteRow(arr, ROWS, COLS, 1);

    for (int i = 0; i < ROWS - 1; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < ROWS; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu