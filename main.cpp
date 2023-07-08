// Multidimensional Dynamic Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void addStringTo2DArray(char** arr, int rows, int cols, const char* str, int row) {
    if (row >= rows) {
        return;
    }

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        arr[row][i] = str[i];
    }
}

int main() {
    const int ROWS = 3;
    const int COLS = 3;

    char** arr = new char* [ROWS];
    for (int i = 0; i < ROWS; i++) {
        arr[i] = new char[COLS];
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = ' ';
        }
    }

    addStringTo2DArray(arr, ROWS, COLS, "hello", 1);

    for (int i = 0; i < ROWS; i++) {
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