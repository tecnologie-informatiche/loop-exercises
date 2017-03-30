#include <iostream>

using namespace std;

int main() {

    int rows;

    cout << "Insert the number of rows:\n";
    cin >> rows;

    for(int i = 0;  i < rows; i++) {

        for(int space = rows - i ; space >= 0 ; space-- )
            cout << "  ";

        for(int asterisk = 1; asterisk <= (i * 2) + 1; asterisk++)
            cout << "* ";

        cout << "\n";
    }
}
