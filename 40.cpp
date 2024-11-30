#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1; // Start row counter from 1 for 1-based indexing
    while (i <= n) {
        // Print leading spaces
        int j = 1;
        while (j < i) { // Leading spaces are based on the current row number
            cout << " ";
            j++;
        }

        // Print stars
        int k = 1;
        while (k <= n - i + 1) { // Stars are based on `n - i + 1`
            cout << "*";
            k++;
        }

        cout << endl; // Move to the next row
        i++;
    }

    return 0;
}
