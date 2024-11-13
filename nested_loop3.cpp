/*
i want to print 
8 
9 9 
10 10 10 
11 11 11 11
12 12 12 12 12
..................
*/
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int num = 8;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
        }
        cout << endl;
        num++;
    }

    return 0;
}
