#include <iostream>
using namespace std;

int main()
{
    int b[2][3] = {2, 3, 6, 4, 5, 8}; // size of 1D array of 3 integers = 12(size of int(4) x 3)
    // an array with 3 rows and 2 columns.
    int x[3][4] = {{0, 1, 4, 6},
                   {2, 3, 6, 4},
                   {4, 5, 7, 10}};

    cout << "2D Array in matrix order: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    int(*p)[3] = b;
    cout << "B : " << b << " B[0] : " << b[0] << " B[0][0] : " << b[0][0] << endl;
    cout << "*B : " << *b << " B[0] : " << b[0] << " b[0][0] : " << &b[0][0] << endl;
    cout << "B + 1 : " << b + 1 << endl; // address of first byte in block + 12(size of 1D array of 3 integers)
    cout << "*(B + 1) : " << *(b + 1) << " B[1] : " << b[1] << " b[1][0] : " << b[1][0] << endl;
    cout << "B + 1 : " << b + 1 << endl;
    cout << "*(B + 1) : " << b + 1 << endl;
    cout << "*(B + 1) + 2 : " << *(b + 1) + 2 << " B[1] + 2 : " << b[1] + 2 << " B[1][2] : " << b[1][2] << endl;
    return 0;
}