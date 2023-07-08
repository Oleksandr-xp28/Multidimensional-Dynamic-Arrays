// Multidimensional Dynamic Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void addRandomRow(int**& arr, int& rows, int cols) {

    int** newArr = new int* [rows + 1];
    for (int i = 0; i < rows + 1; i++) {
        newArr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            newArr[i][j] = arr[i][j];
        }
    }

    srand(time(0));
    for (int j = 0; j < cols; j++) {
        newArr[rows][j] = rand() % 100;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;


    arr = newArr;
    rows++;
}

int main() {
    int rows = 2;
    int cols = 3;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    addRandomRow(arr, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu