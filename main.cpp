#include <iostream>

using namespace std;

int main() {
    int rowCount;
    int colCount;

    cout << "Enter the amount of rows: ";
    cin >> rowCount;
    cout << "Enter the amount of columns: ";
    cin >> colCount;
//Rectangle
    cout << "Rectangle\n" << endl;
    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < colCount; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Enter the amount of rows: ";
    cin >> rowCount;
    cout << "Enter the amount of columns: ";
    cin >> colCount;
//Hollow Rectangle
    cout << "Hollow Rectangle\n" << endl;
    for (int i = 0; i < rowCount; ++i) {
        if (i == 0 || i == rowCount - 1) {
            for (int j = 0; j < colCount; ++j) {
                cout << "* ";
            }
            cout << endl;
        } else {
            for (int j = 0; j < colCount; ++j) {
                if (j == 0 || j == colCount - 1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    int n;
    cout << "Enter n: ";
    cin >> n;
// inverted half pyramid
    cout << "Inverted Half Pyramid\n" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Enter n: ";
    cin >> n;
//Half pyramid inverted horizontally
    cout << "Half Pyramid Inverted Horizontally\n" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << "  ";
        }
        for (int k = 0; k < i; ++k) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Enter n: ";
    cin >> n;
//Repeated Num Sequence
    cout << "Repeated Num Sequence\n" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "Enter n: ";
    cin >> n;
//Num Sequence
    cout << "Num Sequence\n" << endl;
    int numCount = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            numCount++;
            cout << numCount << " ";
        }
        cout << endl;
    }

    cout << "Enter n: ";
    cin >> n;
//Butterfly pattern
    cout << "Butterfly Pattern\n" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        for (int k = 0; k < (n * 2) - (i * 2); ++k) {
            cout << "  ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        for (int k = 0; k < (n * 2) - (i * 2); ++k) {
            cout << "  ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    cin>>n;
}
