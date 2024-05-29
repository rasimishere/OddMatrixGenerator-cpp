#include <iostream>

using namespace std;

static bool isOdd(int num) {
    return num % 2 != 0;
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int** arr = new int* [rows];
for (int i = 0; i < rows; ++i) {
    arr[i] = new int[cols];
}

int value = 1;
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        while (!isOdd(value)) {
            value++;
        }
        arr[i][j] = value;
        value += 2;
    }
}

cout << "\nArray with only odd values:\n";
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

for (int i = 0; i < rows; ++i) {
    delete[] arr[i];
}
delete[] arr;

    return 0;
}
