#include <iostream>
using namespace std;

void funct(int (*array)[2][3]) // (int( *c)[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << array[i][j][k] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // 3D Arrays
    int a[3][2][3] = {{{2, 5, 2}, {7, 9, 11}},
                      {{3, 4, 2}, {6, 1, 11}},
                      {{0, 8, 2}, {11, 13, 23}}};

    // int b[2] = {1, 2};
    // int c[2][3] = {{2, 4, 6}, {5, 7, 8}};
    funct(a);
    return 0;
}
