#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int rows;

    // Input number of rows
    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int num = 1; num <= i; num++) {
            cout << num << " ";
        }

        // Print decreasing alphabets
        char ch = 'A' + i - 2; // Starting alphabet for the row
        for (int num = i - 1; num >= 1; num--) {
            cout << ch-- << " ";
        }

        cout << endl;
    }

    // Bottom part: inverted pyramid
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int num = 1; num <= i; num++) {
            cout << num << " ";
        }

        // Print decreasing alphabets
        char ch = 'A' + i - 2;
        for (int num = i - 1; num >= 1; num--) {
            cout << ch-- << " ";
        }

        cout << endl;
    }

    return 0; // Missing brace could be here in your code.
} // This closes the main function.
