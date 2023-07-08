// Multidimensional Dynamic Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void addCharToBeginning(char** arr, int rows, int cols, char c) {
    for (int i = rows - 1; i > 0; i--) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = arr[i - 1][j];
        }
    }
    for (int i = 0; i < cols; i++) {
        arr[0][i] = c;
    }
}

int main() {
    int rows = 3;
    int cols = 3;

    char** arr = new char* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new char[cols];
    }

    arr[0][0] = 'a';
    arr[0][1] = 'b';
    arr[0][2] = 'c';
    arr[1][0] = 'd';
    arr[1][1] = 'e';
    arr[1][2] = 'f';
    arr[2][0] = 'g';
    arr[2][1] = 'h';
    arr[2][2] = 'i';

    addCharToBeginning(arr, rows, cols, 'z');

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu