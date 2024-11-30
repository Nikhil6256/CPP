#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    int row = 0; // Row counter

    while (row < n) {
        int col = 1;

        // Print left numbers
        while (col <= n - row) {
            cout << col;
            col++;
        }

        // Print middle stars
        col = 1;
        while (col <= 2 * row) {
            cout << "*";
            col++;
        }

        // Print right numbers
        col = n - row;
        while (col >= 1) {
            cout << col;
            col--;
        }

        cout << endl; // Move to the next row
        row++;
    }

    return 0;
}
